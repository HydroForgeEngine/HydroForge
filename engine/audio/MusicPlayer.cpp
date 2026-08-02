#include "MusicPlayer.hpp"

namespace HydroForge
{
    void MusicPlayer::Play(const AudioClip& clip)
    {
        m_CurrentMusic = clip;
    }

    void MusicPlayer::Stop()
    {
    }
}
