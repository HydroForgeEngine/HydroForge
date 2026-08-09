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

        void SetRootPath(const std::string& path);
        const std::string& GetRootPath() const;

        void SetCompiler(const std::string& compiler);
        const std::string& GetCompiler() const;

        bool IsValid() const;

    private:
        ToolchainType m_Type;
        std::string m_RootPath;
        std::string m_Compiler;
    };
}
