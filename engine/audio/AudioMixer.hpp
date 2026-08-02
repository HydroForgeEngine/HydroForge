#pragma once

namespace HydroForge
{
    class AudioMixer
    {
    public:
        void SetMasterVolume(float volume);

        float GetMasterVolume() const;

    private:
        float m_MasterVolume = 1.0f;
    };
}
