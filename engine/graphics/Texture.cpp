#include "Texture.hpp"
#include "../core/Logger.hpp"

namespace HydroForge
{
    Texture::Texture()
        : m_Width(0), m_Height(0)
    {
    }

    bool Texture::Load(const std::string& path)
    {
        m_Path = path;

        Logger::Info("Texture loaded: " + path);

        return true;
    }

    int Texture::GetWidth() const
    {
        return m_Width;
    }

    int Texture::GetHeight() const
    {
        return m_Height;
    }

    const std::string& Texture::GetPath() const
    {
        return m_Path;
    }
}
