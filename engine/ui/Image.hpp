#pragma once

#include <string>

#include "UIElement.hpp"

namespace HydroForge
{
    class Image : public UIElement
    {
    public:
        Image();

        void SetTexture(const std::string& path);
        const std::string& GetTexture() const;

        void Draw() override;

    private:
        std::string m_TexturePath;
    };
}
