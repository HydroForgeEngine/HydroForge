#include "AnimationController.hpp"

namespace HydroForge
{
    void AnimationController::AddState(const AnimationState& state)
    {
        m_States.push_back(state);

        if (m_CurrentState == nullptr)
            m_CurrentState = &m_States.back();
    }

    AnimationState* AnimationController::FindState(
        const std::string& name)
    {
        for (auto& state : m_States)
        {
            if (state.GetName() == name)
                return &state;
        }

        return nullptr;
    }

    void AnimationController::SetCurrentState(
        const std::string& name)
    {
        AnimationState* state = FindState(name);

        if (state != nullptr)
            m_CurrentState = state;
    }

    AnimationState* AnimationController::GetCurrentState()
    {
        return m_CurrentState;
    }
}
