#include "ToolchainDetector.hpp"

#include <cstdlib>
#include <filesystem>

namespace HydroForge
{
    static bool CommandExists(const std::string& command)
    {
#ifdef _WIN32
        std::string test = "where " + command + " >nul 2>&1";
#else
        std::string test = "command -v " + command + " >/dev/null 2>&1";
#endif

        return std::system(test.c_str()) == 0;
    }

    Toolchain ToolchainDetector::Detect(BuildTarget target)
    {
        Toolchain toolchain;

        switch (target)
        {
            case BuildTarget::Windows:
            {
                if (CommandExists("g++"))
                {
                    toolchain = Toolchain(ToolchainType::MinGW);
                    toolchain.SetCompiler("g++");
                }
                else if (CommandExists("cl"))
                {
                    toolchain = Toolchain(ToolchainType::MSVC);
                    toolchain.SetCompiler("cl");
                }

                break;
            }

            case BuildTarget::Nintendo3DS:
            {
                if (CommandExists("arm-none-eabi-g++"))
                {
                    toolchain = Toolchain(ToolchainType::DevkitARM);
                    toolchain.SetCompiler("arm-none-eabi-g++");
                }

                break;
            }

            case BuildTarget::Wii:
            {
                if (CommandExists("powerpc-eabi-g++"))
                {
                    toolchain = Toolchain(ToolchainType::DevkitPPC);
                    toolchain.SetCompiler("powerpc-eabi-g++");
                }

                break;
            }

            case BuildTarget::PSP:
            {
                if (CommandExists("psp-g++"))
                {
                    toolchain = Toolchain(ToolchainType::PSPDev);
                    toolchain.SetCompiler("psp-g++");
                }

                break;
            }
        }

        return toolchain;
    }

    bool ToolchainDetector::IsInstalled(BuildTarget target)
    {
        return Detect(target).IsValid();
    }
}
