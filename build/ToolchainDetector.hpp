#pragma once

#include "Toolchain.hpp"
#include "BuildConfig.hpp"

namespace HydroForge
{
    class ToolchainDetector
    {
    public:
        static Toolchain Detect(BuildTarget target);
        static bool IsInstalled(BuildTarget target);
    };
}
