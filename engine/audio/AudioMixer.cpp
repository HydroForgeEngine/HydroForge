#include "AudioMixer.hpp"

namespace HydroForge
{
    void AudioMixer::SetMasterVolume(float volume)
    {
        m_MasterVolume = volume;
    }

    float AudioMixer::GetMasterVolume() const
    {
        return m_MasterVolume;
    }
}
