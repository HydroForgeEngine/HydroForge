#include "Panel.hpp"

namespace HydroForge
{
    Panel::Panel()
        : m_Opacity(1.0f)
    {
    }

    void Panel::SetOpacity(float opacity)
    {
        if (opacity < 0.0f)
            opacity = 0.0f;

        if (opacity > 1.0f)
            opacity = 1.0f;

        m_Opacity = opacity;
    }

    float Panel::GetOpacity() const
    {
        return m_Opacity;
    }

    void Panel::Draw()
    {
    }
}
