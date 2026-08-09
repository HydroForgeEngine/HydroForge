#include "AnimationClip.hpp"

namespace HydroForge
{
    AnimationClip::AnimationClip()
        : m_Duration(0.0f),
          m_Looping(false)
    {
    }

    AnimationClip::AnimationClip(const std::string& name)
        : m_Name(name),
          m_Duration(0.0f),
          m_Looping(false)
    {
    }

    void AnimationClip::SetName(const std::string& name)
    {
        m_Name = name;
    }

    void AnimationClip::SetDuration(float duration)
    {
        m_Duration = duration;
    }

    void AnimationClip::SetLooping(bool looping)
    {
        m_Looping = looping;
    }

    void AnimationClip::AddKeyframe(const Keyframe& keyframe)
    {
        m_Keyframes.push_back(keyframe);
    }

    const std::string& AnimationClip::GetName() const
    {
        return m_Name;
    }

    float AnimationClip::GetDuration() const
    {
        return m_Duration;
    }

    bool AnimationClip::IsLooping() const
    {
        return m_Looping;
    }

    const std::vector<Keyframe>& AnimationClip::GetKeyframes() const
    {
        return m_Keyframes;
    }
}
