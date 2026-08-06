#include "SphereCollider.hpp"

namespace HydroForge
{
    SphereCollider::SphereCollider()
        : Collider(ColliderType::Sphere),
          m_Radius(0.5f)
    {
    }

    void SphereCollider::SetRadius(float radius)
    {
        if (radius >= 0.0f)
            m_Radius = radius;
    }

    float SphereCollider::GetRadius() const
    {
        return m_Radius;
    }
}
