#include "AnimationState.hpp"

namespace HydroForge
{
    AnimationState::AnimationState()
    {
    }

    AnimationState::AnimationState(const std::string& name)
        : m_Name(name)
    {
    }

    void AnimationState::SetName(const std::string& name)
    {
        m_Name = name;
    }

    const std::string& AnimationState::GetName() const
    {
        return m_Name;
    }
}
