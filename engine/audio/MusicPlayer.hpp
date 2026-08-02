#pragma once

#include "AudioClip.hpp"

namespace HydroForge
{
    class MusicPlayer
    {
    public:
        void Play(const AudioClip& clip);
        void Stop();

    private:
        AudioClip m_CurrentMusic;
    };
}
