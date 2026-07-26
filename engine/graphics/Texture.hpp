#pragma once

#include <string>

namespace HydroForge
{
    class Texture
    {
    public:
        Texture();

        bool Load(const std::string& path);

        int GetWidth() const;
        int GetHeight() const;

        const std::string& GetPath() const;

    private:
        std::string m_Path;
        int m_Width;
        int m_Height;
    };
}
