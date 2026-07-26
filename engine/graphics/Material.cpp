#include "Material.hpp"

namespace HydroForge
{
    Material::Material()
        : m_Name("Default")
    {
    }

    void Material::SetName(const std::string& name)
    {
        m_Name = name;
    }

    void Material::SetColor(const Color& color)
    {
        m_Color = color;
    }

    const std::string& Material::GetName() const
    {
        return m_Name;
    }

    const Color& Material::GetColor() const
    {
        return m_Color;
    }
}
