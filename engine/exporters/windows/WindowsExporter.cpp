#include "WindowsExporter.hpp"

#include <iostream>

namespace HydroForge
{
    bool WindowsExporter::Export(
        const std::string& projectPath,
        const std::string& outputPath)
    {
        std::cout << "Exporting HydroForge project to Windows...\n";
        std::cout << "Project: " << projectPath << "\n";
        std::cout << "Output: " << outputPath << "\n";

        return true;
    }

    PlatformType WindowsExporter::GetPlatform() const
    {
        return PlatformType::Windows;
    }

    const char* WindowsExporter::GetOutputExtension() const
    {
        return ".exe";
    }
}
