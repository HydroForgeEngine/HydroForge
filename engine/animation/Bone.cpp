#include "Bone.hpp"

namespace HydroForge
{
    Bone::Bone(const std::string& name, int index)
        : m_Name(name),
          m_Index(index),
          m_Position(0.0f, 0.0f, 0.0f),
          m_Rotation(0.0f, 0.0f, 0.0f, 1.0f),
          m_Scale(1.0f, 1.0f, 1.0f)
    {
    }

    const std::string& Bone::GetName() const
    {
        return m_Name;
    }

    int Bone::GetIndex() const
    {
        return m_Index;
    }

    void Bone::SetPosition(const Vector3& position)
    {
        m_Position = position;
    }

    void Bone::SetRotation(const Quaternion& rotation)
    {
        m_Rotation = rotation;
    }

    void Bone::SetScale(const Vector3& scale)
    {
        m_Scale = scale;
    }

    const Vector3& Bone::GetPosition() const
    {
        return m_Position;
    }

    const Quaternion& Bone::GetRotation() const
    {
        return m_Rotation;
    }

    const Vector3& Bone::GetScale() const
    {
        return m_Scale;
    }

    void Bone::AddChild(int boneIndex)
    {
        m_Children.push_back(boneIndex);
    }

    const std::vector<int>& Bone::GetChildren() const
    {
        return m_Children;
    }
}
