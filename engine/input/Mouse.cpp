#include "Mouse.hpp"

namespace HydroForge
{
    bool Mouse::IsPressed(MouseButton)
    {
        return false;
    }

    int Mouse::GetX() const
    {
        return m_X;
    }

    int Mouse::GetY() const
    {
        return m_Y;
    }
}
