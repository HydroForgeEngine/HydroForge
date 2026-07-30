#include "AudioSource.hpp"
#include "../core/Logger.hpp"

namespace HydroForge
{
    AudioSource::AudioSource()
    {
    }

    void AudioSource::SetAudio(const std::string& path)
    {
        m_AudioPath = path;
    }

    void AudioSource::Play()
    {
        Logger::Info("Playing: " + m_AudioPath);
    }

    void AudioSource::Stop()
    {
        Logger::Info("Audio stopped.");
    }
}
