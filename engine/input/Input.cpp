#include "Input.hpp"
#include "../core/Logger.hpp"

namespace HydroForge
{
    Keyboard Input::s_Keyboard;
    Mouse Input::s_Mouse;
    Gamepad Input::s_Gamepad;

    void Input::Initialize()
    {
        Logger::Info("Input initialized.");
    }

    void Input::Update()
    {
    }

    void Input::Shutdown()
    {
        Logger::Info("Input shutdown.");
    }

    Keyboard& Input::KeyboardDevice()
    {
        return s_Keyboard;
    }

    Mouse& Input::MouseDevice()
    {
        return s_Mouse;
    }

    Gamepad& Input::GamepadDevice()
    {
        return s_Gamepad;
    }
}
