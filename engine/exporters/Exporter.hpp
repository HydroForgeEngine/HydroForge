#pragma once

#include <string>
#include "../engine/platform/Platform.hpp"

namespace HydroForge
{
    class Exporter
    {
    public:
        virtual ~Exporter() = default;

        virtual bool Export(
            const std::string& projectPath,
            const std::string& outputPath) = 0;

        virtual PlatformType GetPlatform() const = 0;
        virtual const char* GetOutputExtension() const = 0;
    };
}
