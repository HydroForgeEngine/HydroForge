#pragma once

#include "AnimationClip.hpp"

namespace HydroForge
{
    class Animator
    {
    public:
        Animator();

        void Play(AnimationClip* clip);
        void Stop();
        void Update(float deltaTime);

        bool IsPlaying() const;
        float GetTime() const;

        AnimationClip* GetCurrentClip();

    private:
        AnimationClip* m_CurrentClip;
        float m_Time;
        bool m_Playing;
    };
}
