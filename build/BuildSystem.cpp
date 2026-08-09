#include "BuildSystem.hpp"

#include "Process.hpp"
#include "ToolchainDetector.hpp"

#include <filesystem>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

namespace fs = std::filesystem;

namespace HydroForge
{
    namespace
    {
        BuildResult MakeResult(
            BuildStatus status,
            const std::string& message,
            const std::string& output = "")
        {
            BuildResult result;

            result.Status = status;
            result.Message = message;
            result.OutputPath = output;

            return result;
        }

        bool IsSourceFile(const fs::path& path)
        {
            if (!path.has_extension())
                return false;

            const std::string extension =
                path.extension().string();

            return extension == ".cpp" ||
                   extension == ".cc"  ||
                   extension == ".cxx" ||
                   extension == ".c";
        }

        std::vector<fs::path> FindSources(
            const fs::path& projectPath)
        {
            std::vector<fs::path> sources;

            fs::path sourceDirectory =
                projectPath / "src";

            if (!fs::exists(sourceDirectory))
                return sources;

            for (const auto& entry :
                 fs::recursive_directory_iterator(sourceDirectory))
            {
                if (!entry.is_regular_file())
                    continue;

                if (IsSourceFile(entry.path()))
                    sources.push_back(entry.path());
            }

            return sources;
        }

        bool HasProjectFile(
            const fs::path& projectPath)
        {
            return fs::exists(
                projectPath / "project.hydro");
        }

        std::string Quote(
            const std::string& value)
        {
#ifdef _WIN32
            return "\"" + value + "\"";
#else
            return "'" + value + "'";
#endif
        }

        std::string JoinSources(
            const std::vector<fs::path>& sources)
        {
            std::ostringstream stream;

            for (const auto& source : sources)
            {
                stream << Quote(source.string())
                       << " ";
            }

            return stream.str();
        }

        void AppendOutput(
            BuildResult& result,
            const ProcessResult& process)
        {
            result.Message += process.Output;
        }
    }

    BuildResult BuildSystem::Build(
        const BuildConfig& config)
    {
        fs::path projectPath(config.ProjectPath);

        if (!fs::exists(projectPath))
        {
            return MakeResult(
                BuildStatus::InvalidProject,
                "Project directory does not exist.");
        }

        if (!fs::is_directory(projectPath))
        {
            return MakeResult(
                BuildStatus::InvalidProject,
                "Project path is not a directory.");
        }

        if (!HasProjectFile(projectPath))
        {
            return MakeResult(
                BuildStatus::InvalidProject,
                "project.hydro was not found.");
        }

        std::vector<fs::path> sources =
            FindSources(projectPath);

        if (sources.empty())
        {
            return MakeResult(
                BuildStatus::InvalidProject,
                "No C/C++ source files were found in src/.");
        }

        if (config.CleanBuild)
        {
            if (!Clean(config))
            {
                return MakeResult(
                    BuildStatus::Failed,
                    "Failed to clean build directory.");
            }
        }

        switch (config.Target)
        {
            case BuildTarget::Windows:
                return BuildWindows(config);

            case BuildTarget::Nintendo3DS:
                return Build3DS(config);

            case BuildTarget::Wii:
                return BuildWii(config);

            case BuildTarget::PSP:
                return BuildPSP(config);
        }

        return MakeResult(
            BuildStatus::Failed,
            "Unknown build target.");
    }

    BuildResult BuildSystem::BuildWindows(
        const BuildConfig& config)
    {
        Toolchain toolchain =
            ToolchainDetector::Detect(
                BuildTarget::Windows);

        if (!toolchain.IsValid())
        {
            return MakeResult(
                BuildStatus::ToolchainNotFound,
                "No Windows C++ toolchain was found.");
        }

        fs::path projectPath(config.ProjectPath);
        fs::path outputDirectory(config.OutputPath);

        fs::create_directories(outputDirectory);

        std::vector<fs::path> sources =
            FindSources(projectPath);

        if (sources.empty())
        {
            return MakeResult(
                BuildStatus::InvalidProject,
                "No source files found.");
        }

        fs::path output =
            outputDirectory /
            (config.ProjectName + ".exe");

        std::ostringstream command;

        command << toolchain.GetCompiler()
                << " ";

        if (toolchain.GetCompiler() == "g++")
        {
            command << "-std=c++17 "
                    << "-O2 ";

            if (config.Debug)
                command << "-g ";

            command << JoinSources(sources)
                    << "-o "
                    << Quote(output.string());
        }
        else
        {
            /*
             * MSVC normalmente precisa ser executado
             * dentro de um Developer Command Prompt.
             */
            command << "/EHsc ";

            if (config.Debug)
                command << "/Zi ";

            for (const auto& source : sources)
            {
                command << Quote(source.string())
                        << " ";
            }

            command << "/Fe:"
                    << Quote(output.string());
        }

        ProcessResult process =
            Process::Run(command.str());

        BuildResult result;

        result.OutputPath =
            output.string();

        result.Message =
            "Windows build:\n" +
            process.Output;

        if (!process.Success())
        {
            result.Status =
                BuildStatus::Failed;

            return result;
        }

        result.Status =
            BuildStatus::Success;

        result.Message +=
            "\nWindows executable generated:\n" +
            output.string();

        return result;
    }

    BuildResult BuildSystem::Build3DS(
        const BuildConfig& config)
    {
        Toolchain toolchain =
            ToolchainDetector::Detect(
                BuildTarget::Nintendo3DS);

        if (!toolchain.IsValid())
        {
            return MakeResult(
                BuildStatus::ToolchainNotFound,
                "devkitARM was not found.");
        }

        fs::path projectPath(config.ProjectPath);
        fs::path outputDirectory(config.OutputPath);

        fs::create_directories(outputDirectory);

        std::vector<fs::path> sources =
            FindSources(projectPath);

        if (sources.empty())
        {
            return MakeResult(
                BuildStatus::InvalidProject,
                "No source files found.");
        }

        fs::path elf =
            outputDirectory /
            (config.ProjectName + ".elf");

        std::ostringstream command;

        command << toolchain.GetCompiler()
                << " "
                << "-std=c++17 "
                << "-O2 "
                << JoinSources(sources)
                << "-o "
                << Quote(elf.string());

        if (config.Debug)
            command << " -g";

        ProcessResult compile =
            Process::Run(command.str());

        BuildResult result;

        result.Message =
            "Nintendo 3DS build:\n" +
            compile.Output;

        if (!compile.Success())
        {
            result.Status =
                BuildStatus::Failed;

            return result;
        }

        /*
         * ELF -> 3DSX
         */
        fs::path threeDSX =
            outputDirectory /
            (config.ProjectName + ".3dsx");

        std::string convertCommand =
            "3dsxtool " +
            Quote(elf.string()) +
            " " +
            Quote(threeDSX.string());

        ProcessResult convert =
            Process::Run(convertCommand);

        result.Message +=
            "\n3DSX conversion:\n" +
            convert.Output;

        if (!convert.Success())
        {
            result.Status =
                BuildStatus::Failed;

            result.Message +=
                "\nFailed to generate .3dsx. "
                "Make sure 3dsxtool is installed.";

            return result;
        }

        result.Status =
            BuildStatus::Success;

        result.OutputPath =
            threeDSX.string();

        result.Message +=
            "\nNintendo 3DS .3dsx generated:\n" +
            threeDSX.string();

        return result;
    }

    BuildResult BuildSystem::BuildWii(
        const BuildConfig& config)
    {
        Toolchain toolchain =
            ToolchainDetector::Detect(
                BuildTarget::Wii);

        if (!toolchain.IsValid())
        {
            return MakeResult(
                BuildStatus::ToolchainNotFound,
                "devkitPPC was not found.");
        }

        fs::path projectPath(config.ProjectPath);
        fs::path outputDirectory(config.OutputPath);

        fs::create_directories(outputDirectory);

        std::vector<fs::path> sources =
            FindSources(projectPath);

        if (sources.empty())
        {
            return MakeResult(
                BuildStatus::InvalidProject,
                "No source files found.");
        }

        fs::path elf =
            outputDirectory /
            (config.ProjectName + ".elf");

        std::ostringstream command;

        command << toolchain.GetCompiler()
                << " "
                << "-std=c++17 "
                << "-O2 "
                << JoinSources(sources)
                << "-o "
                << Quote(elf.string());

        if (config.Debug)
            command << " -g";

        ProcessResult compile =
            Process::Run(command.str());

        BuildResult result;

        result.Message =
            "Nintendo Wii build:\n" +
            compile.Output;

        if (!compile.Success())
        {
            result.Status =
                BuildStatus::Failed;

            return result;
        }

        /*
         * ELF -> DOL
         */
        fs::path dol =
            outputDirectory /
            (config.ProjectName + ".dol");

        std::string convertCommand =
            "elf2dol " +
            Quote(elf.string()) +
            " " +
            Quote(dol.string());

        ProcessResult convert =
            Process::Run(convertCommand);

        result.Message +=
            "\nDOL conversion:\n" +
            convert.Output;

        if (!convert.Success())
        {
            result.Status =
                BuildStatus::Failed;

            result.Message +=
                "\nFailed to generate .dol. "
                "Make sure elf2dol is installed.";

            return result;
        }

        result.Status =
            BuildStatus::Success;

        result.OutputPath =
            dol.string();

        result.Message +=
            "\nNintendo Wii .dol generated:\n" +
            dol.string();

        return result;
    }

    BuildResult BuildSystem::BuildPSP(
        const BuildConfig& config)
    {
        Toolchain toolchain =
            ToolchainDetector::Detect(
                BuildTarget::PSP);

        if (!toolchain.IsValid())
        {
            return MakeResult(
                BuildStatus::ToolchainNotFound,
                "PSPDEV was not found.");
        }

        fs::path projectPath(config.ProjectPath);
        fs::path outputDirectory(config.OutputPath);

        fs::create_directories(outputDirectory);

        std::vector<fs::path> sources =
            FindSources(projectPath);

        if (sources.empty())
        {
            return MakeResult(
                BuildStatus::InvalidProject,
                "No source files found.");
        }

        fs::path elf =
            outputDirectory /
            (config.ProjectName + ".elf");

        std::ostringstream command;

        command << toolchain.GetCompiler()
                << " "
                << "-std=c++17 "
                << "-O2 "
                << JoinSources(sources)
                << "-o "
                << Quote(elf.string());

        if (config.Debug)
            command << " -g";

        ProcessResult compile =
            Process::Run(command.str());

        BuildResult result;

        result.Message =
            "PSP build:\n" +
            compile.Output;

        if (!compile.Success())
        {
            result.Status =
                BuildStatus::Failed;

            return result;
        }

        /*
         * Cria a estrutura necessária para o EBOOT.PBP.
         */
        fs::path pspDirectory =
            outputDirectory / "PSP_GAME";

        fs::create_directories(
            pspDirectory);

        /*
         * EBOOT.PBP precisa de PARAM.SFO,
         * ICON0.PNG e o executável EBOOT.PBP.
         *
         * O PSPDEV fornece ferramentas como
         * mksfoex e pack-pbp.
         */

        fs::path paramSFO =
            pspDirectory / "PARAM.SFO";

        std::string sfoCommand =
            "mksfoex " +
            Quote(config.ProjectName) +
            " " +
            Quote(paramSFO.string());

        ProcessResult sfo =
            Process::Run(sfoCommand);

        result.Message +=
            "\nPARAM.SFO:\n" +
            sfo.Output;

        if (!sfo.Success())
        {
            result.Status =
                BuildStatus::Failed;

            result.Message +=
                "\nFailed to generate PARAM.SFO.";

            return result;
        }

        fs::path eboot =
            outputDirectory /
            "EBOOT.PBP";

        std::string packCommand =
            "pack-pbp " +
            Quote(eboot.string()) +
            " "
            "-f " +
            Quote(paramSFO.string()) +
            " "
            "-b " +
            Quote(
                (projectPath / "assets" / "ICON0.PNG")
                    .string()
            ) +
            " "
            "-e " +
            Quote(elf.string());

        ProcessResult pack =
            Process::Run(packCommand);

        result.Message +=
            "\nEBOOT.PBP:\n" +
            pack.Output;

        if (!pack.Success())
        {
            result.Status =
                BuildStatus::Failed;

            result.Message +=
                "\nFailed to generate EBOOT.PBP.";

            return result;
        }

        result.Status =
            BuildStatus::Success;

        result.OutputPath =
            eboot.string();

        result.Message +=
            "\nPSP EBOOT.PBP generated:\n" +
            eboot.string();

        return result;
    }

    bool BuildSystem::Clean(
        const BuildConfig& config)
    {
        if (config.OutputPath.empty())
            return false;

        fs::path outputDirectory(
            config.OutputPath);

        if (!fs::exists(outputDirectory))
            return true;

        try
        {
            fs::remove_all(
                outputDirectory);
        }
        catch (...)
        {
            return false;
        }

        return true;
    }
}
