#pragma once

#include "../math/Vector3.hpp"

namespace HydroForge
{
    class Transform
    {
    public:
        Vector3 Position;
        Vector3 Rotation;
        Vector3 Scale;

        Transform();
    };
}
