#pragma once

#include <string>
#include <vector>

#include "../math/Vector3.hpp"
#include "../math/Quaternion.hpp"

namespace HydroForge
{
    class Bone
    {
    public:
        Bone(const std::string& name, int index);

        const std::string& GetName() const;
        int GetIndex() const;

        void SetPosition(const Vector3& position);
        void SetRotation(const Quaternion& rotation);
        void SetScale(const Vector3& scale);

        const Vector3& GetPosition() const;
        const Quaternion& GetRotation() const;
        const Vector3& GetScale() const;

        void AddChild(int boneIndex);
        const std::vector<int>& GetChildren() const;

    private:
        std::string m_Name;
        int m_Index;

        Vector3 m_Position;
        Quaternion m_Rotation;
        Vector3 m_Scale;

        std::vector<int> m_Children;
    };
}
