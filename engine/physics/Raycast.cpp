#include "Raycast.hpp"

namespace HydroForge
{
    Raycast::Raycast()
        : m_Origin(0.0f, 0.0f, 0.0f),
          m_Direction(0.0f, 0.0f, -1.0f),
          m_MaxDistance(1000.0f)
    {
    }

    void Raycast::SetOrigin(const Vector3& origin)
    {
        m_Origin = origin;
    }

    void Raycast::SetDirection(const Vector3& direction)
    {
        m_Direction = direction;
    }

    void Raycast::SetMaxDistance(float distance)
    {
        if (distance >= 0.0f)
            m_MaxDistance = distance;
    }

    const Vector3& Raycast::GetOrigin() const
    {
        return m_Origin;
    }

    const Vector3& Raycast::GetDirection() const
    {
        return m_Direction;
    }

    float Raycast::GetMaxDistance() const
    {
        return m_MaxDistance;
    }
}
