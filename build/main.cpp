#include "BuildSystem.hpp"

#include <iostream>
#include <string>

using namespace HydroForge;

static BuildTarget ParseTarget(
    const std::string& target)
{
    if (target == "windows")
        return BuildTarget::Windows;

    if (target == "3ds")
        return BuildTarget::Nintendo3DS;

    if (target == "wii")
        return BuildTarget::Wii;

    if (target == "psp")
        return BuildTarget::PSP;

    return BuildTarget::Windows;
}

int main(int argc, char* argv[])
{
    if (argc < 4)
    {
        std::cout
            << "HydroForge Build Tool\n\n"
            << "Usage:\n"
            << "  hydrobuild <target> <project> <output>\n\n"
            << "Targets:\n"
            << "  windows\n"
            << "  3ds\n"
            << "  wii\n"
            << "  psp\n";

        return 1;
    }

    std::string target = argv[1];
    std::string project = argv[2];
    std::string output = argv[3];

    BuildConfig config;

    config.Target =
        ParseTarget(target);

    config.ProjectPath =
        project;

    config.OutputPath =
        output;

    config.ProjectName =
        "HydroForgeGame";

    config.Debug = false;
    config.CleanBuild = false;

    BuildResult result =
        BuildSystem::Build(config);

    std::cout << result.Message
              << std::endl;

    if (!result.Succeeded())
    {
        return 1;
    }

    std::cout
        << "\nBUILD SUCCESS!\n"
        << result.OutputPath
        << std::endl;

    return 0;
}
