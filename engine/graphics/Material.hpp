#pragma once

#include <string>
#include "Color.hpp"

namespace HydroForge
{
    class Material
    {
    public:
        Material();

        void SetName(const std::string& name);
        void SetColor(const Color& color);

        const std::string& GetName() const;
        const Color& GetColor() const;

    private:
        std::string m_Name;
        Color m_Color;
    };
}
