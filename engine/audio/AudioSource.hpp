#pragma once

#include "AudioClip.hpp"

namespace HydroForge
{
    class AudioSource
    {
    public:
        void SetClip(const AudioClip& clip);

        void Play();
        void Pause();
        void Stop();

    private:
        AudioClip m_Clip;
    };
}
