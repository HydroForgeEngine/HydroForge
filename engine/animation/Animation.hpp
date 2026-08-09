#pragma once

#include "AnimationClip.hpp"

namespace HydroForge
{
    class Animation
    {
    public:
        static void Update(AnimationClip& clip, float deltaTime);
    };
}
