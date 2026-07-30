#pragma once

#include "Keyboard.hpp"
#include "Mouse.hpp"
#include "Gamepad.hpp"

namespace HydroForge
{
    class Input
    {
    public:
        static void Initialize();
        static void Update();
        static void Shutdown();

        static Keyboard& KeyboardDevice();
        static Mouse& MouseDevice();
        static Gamepad& GamepadDevice();

    private:
        static Keyboard s_Keyboard;
        static Mouse s_Mouse;
        static Gamepad s_Gamepad;
    };
}
