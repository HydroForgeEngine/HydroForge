#pragma once

namespace HydroForge
{
    class Math
    {
    public:
        static float Clamp(float value, float min, float max);
        static float Lerp(float a, float b, float t);
    };
}
