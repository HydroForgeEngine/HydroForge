#pragma once

#include "MouseButtons.hpp"

namespace HydroForge
{
    class Mouse
    {
    public:
        bool IsPressed(MouseButton button) const;

        int GetX() const;
        int GetY() const;

    private:
        int m_X = 0;
        int m_Y = 0;
    };
}
