#include "Collider.hpp"

namespace HydroForge
{
    Collider::Collider(ColliderType type)
        : m_Type(type),
          m_Center(0.0f, 0.0f, 0.0f)
    {
    }

    ColliderType Collider::GetType() const
    {
        return m_Type;
    }

    void Collider::SetCenter(const Vector3& center)
    {
        m_Center = center;
    }

    const Vector3& Collider::GetCenter() const
    {
        return m_Center;
    }
}
