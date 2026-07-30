#pragma once

#include "KeyCodes.hpp"

namespace HydroForge
{
    class Keyboard
    {
    public:
        bool IsPressed(KeyCode key) const;
        bool IsReleased(KeyCode key) const;
    };
}
