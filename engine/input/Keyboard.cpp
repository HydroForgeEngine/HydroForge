#include "Keyboard.hpp"

namespace HydroForge
{
    bool Keyboard::IsPressed(KeyCode)
    {
        return false;
    }

    bool Keyboard::IsReleased(KeyCode)
    {
        return true;
    }
}
