#pragma once

#include "AudioClip.hpp"

namespace HydroForge
{
    class SoundEffect
    {
    public:
        void Play(const AudioClip& clip);
    };
}
