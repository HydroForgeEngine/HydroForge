#include "Math.hpp"

namespace HydroForge
{
    float Math::Clamp(float value, float min, float max)
    {
        if (value < min) return min;
        if (value > max) return max;
        return value;
    }

    float Math::Lerp(float a, float b, float t)
    {
        return a + (b - a) * t;
    }
}
