#pragma once

#include "../Exporter.hpp"

namespace HydroForge
{
    class WindowsExporter : public Exporter
    {
    public:
        bool Export(
            const std::string& projectPath,
            const std::string& outputPath) override;

        PlatformType GetPlatform() const override;

        const char* GetOutputExtension() const override;
    };
}
