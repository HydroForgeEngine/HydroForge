#pragma once

#include "../math/Vector3.hpp"

namespace HydroForge
{
    class Rigidbody
    {
    public:
        Rigidbody();

        void SetMass(float mass);
        float GetMass() const;

        void SetVelocity(const Vector3& velocity);
        const Vector3& GetVelocity() const;

        void AddForce(const Vector3& force);

        void SetUseGravity(bool enabled);
        bool UsesGravity() const;

    private:
        float m_Mass;
        bool m_UseGravity;

        Vector3 m_Velocity;
        Vector3 m_Force;
    };
}
