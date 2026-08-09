#pragma once

#include <string>

namespace HydroForge
{
    enum class ToolchainType
    {
        MSVC,
        MinGW,
        DevkitARM,
        DevkitPPC,
        PSPDev
    };

    class Toolchain
    {
    public:
        Toolchain();
        explicit Toolchain(ToolchainType type);

        void SetType(ToolchainType type);
        ToolchainType GetType() const;

        void SetPath(const std::string& path);
        const std::string& GetPath() const;

        bool IsValid() const;

    private:
        ToolchainType m_Type;
        std::string m_Path;
    };
}
