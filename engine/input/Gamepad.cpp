#include "Gamepad.hpp"

namespace HydroForge
{
    bool Gamepad::IsPressed(GamepadButton)
    {
        return false;
    }

    float Gamepad::GetLeftStickX() const
    {
        return 0.0f;
    }

    float Gamepad::GetLeftStickY() const
    {
        return 0.0f;
    }

    float Gamepad::GetRightStickX() const
    {
        return 0.0f;
    }

    float Gamepad::GetRightStickY() const
    {
        return 0.0f;
    }
}
