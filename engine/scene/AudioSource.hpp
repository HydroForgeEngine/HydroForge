#pragma once

#include <string>

namespace HydroForge
{
    class AudioSource
    {
    public:
        AudioSource();

        void SetAudio(const std::string& path);
        void Play();
        void Stop();

    private:
        std::string m_AudioPath;
    };
}
