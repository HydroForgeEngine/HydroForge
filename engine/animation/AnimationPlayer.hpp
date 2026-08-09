#pragma once

#include "Animator.hpp"

namespace HydroForge
{
    class AnimationPlayer
    {
    public:
        void SetAnimator(Animator* animator);

        void Play(AnimationClip* clip);
        void Stop();

        void Update(float deltaTime);

    private:
        Animator* m_Animator = nullptr;
    };
}
