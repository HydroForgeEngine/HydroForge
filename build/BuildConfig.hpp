#pragma once

#include <string>

namespace HydroForge
{
    enum class BuildTarget
    {
        Windows,
        Nintendo3DS,
        Wii,
        PSP
    };

    struct BuildConfig
    {
        BuildTarget Target = BuildTarget::Windows;

        std::string ProjectPath;
        std::string OutputPath;

        std::string ProjectName = "HydroForgeGame";

        bool Debug = false;
        bool CleanBuild = false;
    };
}
