#pragma once

#include <vector>
#include <string>
#include "AnimationState.hpp"

namespace HydroForge
{
    class AnimationController
    {
    public:
        void AddState(const AnimationState& state);

        AnimationState* FindState(const std::string& name);

        void SetCurrentState(const std::string& name);

        AnimationState* GetCurrentState();

    private:
        std::vector<AnimationState> m_States;
        AnimationState* m_CurrentState = nullptr;
    };
}
