#include "BoxCollider.hpp"

namespace HydroForge
{
    BoxCollider::BoxCollider()
        : Collider(ColliderType::Box),
          m_Size(1.0f, 1.0f, 1.0f)
    {
    }

    void BoxCollider::SetSize(const Vector3& size)
    {
        m_Size = size;
    }

    const Vector3& BoxCollider::GetSize() const
    {
        return m_Size;
    }
}
