#include "Toolchain.hpp"

namespace HydroForge
{
    Toolchain::Toolchain()
        : m_Type(ToolchainType::MSVC)
    {
    }

    Toolchain::Toolchain(ToolchainType type)
        : m_Type(type)
    {
    }

    void Toolchain::SetType(ToolchainType type)
    {
        m_Type = type;
    }

    ToolchainType Toolchain::GetType() const
    {
        return m_Type;
    }

    void Toolchain::SetRootPath(const std::string& path)
    {
        m_RootPath = path;
    }

    const std::string& Toolchain::GetRootPath() const
    {
        return m_RootPath;
    }

    void Toolchain::SetCompiler(const std::string& compiler)
    {
        m_Compiler = compiler;
    }

    const std::string& Toolchain::GetCompiler() const
    {
        return m_Compiler;
    }

    bool Toolchain::IsValid() const
    {
        return !m_Compiler.empty();
    }
}
