#pragma once

#include <string>
#include <vector>

#include "Keyframe.hpp"

namespace HydroForge
{
    class AnimationClip
    {
    public:
        AnimationClip();
        explicit AnimationClip(const std::string& name);

        void SetName(const std::string& name);
        void SetDuration(float duration);
        void SetLooping(bool looping);

        void AddKeyframe(const Keyframe& keyframe);

        const std::string& GetName() const;
        float GetDuration() const;
        bool IsLooping() const;

        const std::vector<Keyframe>& GetKeyframes() const;

    private:
        std::string m_Name;
        float m_Duration;
        bool m_Looping;

        std::vector<Keyframe> m_Keyframes;
    };
}
