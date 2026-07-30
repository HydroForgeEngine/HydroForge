#pragma once

#include "../graphics/Color.hpp"

namespace HydroForge
{
    class Light
    {
    public:
        Color ColorData;
        float Intensity = 1.0f;
    };
}
