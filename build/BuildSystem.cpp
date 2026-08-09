#include "BuildSystem.hpp"
#include "ToolchainDetector.hpp"

namespace HydroForge
{
    BuildResult BuildSystem::Build(const BuildConfig& config)
    {
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

        BuildResult result;
        result.Status = BuildStatus::Failed;
        result.Message = "Unknown build target.";

        return result;
    }

    BuildResult BuildSystem::BuildWindows(const BuildConfig& config)
    {
        BuildResult result;

        result.Status = BuildStatus::Success;
        result.OutputPath = config.OutputPath;
        result.Message = "Windows build system ready.";

        return result;
    }

    BuildResult BuildSystem::Build3DS(const BuildConfig& config)
    {
        BuildResult result;

        result.Status = BuildStatus::Success;
        result.OutputPath = config.OutputPath;
        result.Message = "Nintendo 3DS build system ready.";

        return result;
    }

    BuildResult BuildSystem::BuildWii(const BuildConfig& config)
    {
        BuildResult result;

        result.Status = BuildStatus::Success;
        result.OutputPath = config.OutputPath;
        result.Message = "Wii build system ready.";

        return result;
    }

    BuildResult BuildSystem::BuildPSP(const BuildConfig& config)
    {
        BuildResult result;

        result.Status = BuildStatus::Success;
        result.OutputPath = config.OutputPath;
        result.Message = "PSP build system ready.";

        return result;
    }

    bool BuildSystem::Clean(const BuildConfig& config)
    {
        (void)config;
        return true;
    }
}
