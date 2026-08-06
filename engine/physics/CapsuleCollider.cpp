#include "CapsuleCollider.hpp"

namespace HydroForge
{
    CapsuleCollider::CapsuleCollider()
        : Collider(ColliderType::Capsule),
          m_Radius(0.5f),
          m_Height(2.0f)
    {
    }

    void CapsuleCollider::SetRadius(float radius)
    {
        if (radius >= 0.0f)
            m_Radius = radius;
    }

    void CapsuleCollider::SetHeight(float height)
    {
        if (height >= 0.0f)
            m_Height = height;
    }

    float CapsuleCollider::GetRadius() const
    {
        return m_Radius;
    }

    float CapsuleCollider::GetHeight() const
    {
        return m_Height;
    }
}
