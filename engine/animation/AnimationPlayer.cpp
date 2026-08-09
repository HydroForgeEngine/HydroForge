#include "AnimationPlayer.hpp"

namespace HydroForge
{
    void AnimationPlayer::SetAnimator(Animator* animator)
    {
        m_Animator = animator;
    }

    void AnimationPlayer::Play(AnimationClip* clip)
    {
        if (m_Animator != nullptr)
            m_Animator->Play(clip);
    }

    void AnimationPlayer::Stop()
    {
        if (m_Animator != nullptr)
            m_Animator->Stop();
    }

    void AnimationPlayer::Update(float deltaTime)
    {
        if (m_Animator != nullptr)
            m_Animator->Update(deltaTime);
    }
}
