
#pragma once

#include "BuildConfig.hpp"
#include "BuildResult.hpp"

namespace HydroForge
{
    class BuildSystem
    {
    public:

        // Build the project for the selected platform.
        static BuildResult Build(
            const BuildConfig& config
        );

        // Remove generated build files.
        static bool Clean(
            const BuildConfig& config
        );

    private:

        // Windows
        static BuildResult BuildWindows(
            const BuildConfig& config
        );

        // Nintendo 3DS
        static BuildResult Build3DS(
            const BuildConfig& config
        );

        // Nintendo Wii
        static BuildResult BuildWii(
            const BuildConfig& config
        );

        // PlayStation Portable
        static BuildResult BuildPSP(
            const BuildConfig& config
        );
    };
