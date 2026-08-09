#pragma once

#include <string>

namespace HydroForge
{
    class AnimationState
    {
    public:
        AnimationState();
        explicit AnimationState(const std::string& name);

        void SetName(const std::string& name);

        const std::string& GetName() const;

    private:
        std::string m_Name;
    };
}
