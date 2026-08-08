#pragma once

#include "../math/Vector3.hpp"
#include "../math/Quaternion.hpp"

namespace HydroForge
{
    struct Keyframe
    {
        float Time;

        Vector3 Position;
        Vector3 Scale;
        Quaternion Rotation;

        Keyframe();
        explicit Keyframe(float time);
    };
}
