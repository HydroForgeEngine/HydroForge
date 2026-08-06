#include "Collision.hpp"

namespace HydroForge
{
    Collision::Collision()
        : m_Point(0.0f, 0.0f, 0.0f),
          m_Normal(0.0f, 1.0f, 0.0f),
          m_Depth(0.0f)
    {
    }

    void Collision::SetPoint(const Vector3& point)
    {
        m_Point = point;
    }

    void Collision::SetNormal(const Vector3& normal)
    {
        m_Normal = normal;
    }

    void Collision::SetDepth(float depth)
    {
        m_Depth = depth;
    }

    const Vector3& Collision::GetPoint() const
    {
        return m_Point;
    }

    const Vector3& Collision::GetNormal() const
    {
        return m_Normal;
    }

    float Collision::GetDepth() const
    {
        return m_Depth;
    }
}
