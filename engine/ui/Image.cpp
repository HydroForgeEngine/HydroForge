#include "Image.hpp"

namespace HydroForge
{
    Image::Image()
    {
    }

    void Image::SetTexture(const std::string& path)
    {
        m_TexturePath = path;
    }

    const std::string& Image::GetTexture() const
    {
        return m_TexturePath;
    }

    void Image::Draw()
    {
    }
}
