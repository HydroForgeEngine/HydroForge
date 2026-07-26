#include "Sprite.hpp"

namespace HydroForge
{
    Sprite::Sprite()
    {
    }

    void Sprite::SetTexture(const std::string& path)
    {
        m_TexturePath = path;
    }

    const std::string& Sprite::GetTexture() const
    {
        return m_TexturePath;
    }
}
