#pragma once

#include <string>

namespace HydroForge
{
    class Sprite
    {
    public:
        Sprite();

        void SetTexture(const std::string& path);
        const std::string& GetTexture() const;

    private:
        std::string m_TexturePath;
    };
}
