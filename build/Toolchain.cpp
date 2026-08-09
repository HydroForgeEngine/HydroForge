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

    void Toolchain::SetPath(const std::string& path)
    {
        m_Path = path;
    }

    const std::string& Toolchain::GetPath() const
    {
        return m_Path;
    }

    bool Toolchain::IsValid() const
    {
        return !m_Path.empty();
    }
}
