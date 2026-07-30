#pragma once

#include "GamepadButtons.hpp"

namespace HydroForge
{
    class Gamepad
    {
    public:
        bool IsPressed(GamepadButton button) const;

        float GetLeftStickX() const;
        float GetLeftStickY() const;

        float GetRightStickX() const;
        float GetRightStickY() const;
    };
}
