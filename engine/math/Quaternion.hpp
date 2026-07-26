#pragma once

namespace HydroForge
{
    class Quaternion
    {
    public:
        float x;
        float y;
        float z;
        float w;

        Quaternion();
        Quaternion(float x, float y, float z, float w);
    };
}
