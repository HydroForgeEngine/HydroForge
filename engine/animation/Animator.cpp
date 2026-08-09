#include "Animator.hpp"

namespace HydroForge
{
    Animator::Animator()
        : m_CurrentClip(nullptr),
          m_Time(0.0f),
          m_Playing(false)
    {
    }

    void Animator::Play(AnimationClip* clip)
    {
        m_CurrentClip = clip;
        m_Time = 0.0f;
        m_Playing = (clip != nullptr);
    }

    void Animator::Stop()
    {
        m_Playing = false;
        m_Time = 0.0f;
    }

    void Animator::Update(float deltaTime)
    {
        if (!m_Playing || m_CurrentClip == nullptr)
            return;

        m_Time += deltaTime;

        float duration = m_CurrentClip->GetDuration();

        if (duration <= 0.0f)
            return;

        if (m_Time >= duration)
        {
            if (m_CurrentClip->IsLooping())
            {
                m_Time = 0.0f;
            }
            else
            {
                m_Time = duration;
                m_Playing = false;
            }
        }
    }

    bool Animator::IsPlaying() const
    {
        return m_Playing;
    }

    float Animator::GetTime() const
    {
        return m_Time;
    }

    AnimationClip* Animator::GetCurrentClip()
    {
        return m_CurrentClip;
    }
}
