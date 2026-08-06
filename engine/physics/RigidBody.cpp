#include "Rigidbody.hpp"

namespace HydroForge
{
    Rigidbody::Rigidbody()
        : m_Mass(1.0f),
          m_UseGravity(true),
          m_Velocity(0.0f, 0.0f, 0.0f),
          m_Force(0.0f, 0.0f, 0.0f)
    {
    }

    void Rigidbody::SetMass(float mass)
    {
        if (mass > 0.0f)
            m_Mass = mass;
    }

    float Rigidbody::GetMass() const
    {
        return m_Mass;
    }

    void Rigidbody::SetVelocity(const Vector3& velocity)
    {
        m_Velocity = velocity;
    }

    const Vector3& Rigidbody::GetVelocity() const
    {
        return m_Velocity;
    }

    void Rigidbody::AddForce(const Vector3& force)
    {
        m_Force = m_Force.Add(force);
    }

    void Rigidbody::SetUseGravity(bool enabled)
    {
        m_UseGravity = enabled;
    }

    bool Rigidbody::UsesGravity() const
    {
        return m_UseGravity;
    }
}
