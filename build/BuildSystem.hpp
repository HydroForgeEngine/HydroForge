#pragma once

#include "BuildConfig.hpp"
#include "BuildResult.hpp"

namespace HydroForge
{
    class BuildSystem
    {
    public:
        static BuildResult Build(const BuildConfig& config);

        static bool Clean(const BuildConfig& config);

    private:
        static BuildResult BuildWindows(const BuildConfig& config);
        static BuildResult Build3DS(const BuildConfig& config);
        static BuildResult BuildWii(const BuildConfig& config);
        static BuildResult BuildPSP(const BuildConfig& config);
    };
}
