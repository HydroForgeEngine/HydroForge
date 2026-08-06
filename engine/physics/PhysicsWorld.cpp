#include "PhysicsWorld.hpp"

namespace HydroForge
{
    PhysicsWorld::PhysicsWorld()
        : m_Gravity(0.0f, -9.81f, 0.0f)
    {
    }

    void PhysicsWorld::SetGravity(const Vector3& gravity)
    {
        m_Gravity = gravity;
    }

    const Vector3& PhysicsWorld::GetGravity() const
    {
        return m_Gravity;
    }

    void PhysicsWorld::Step(float deltaTime)
    {
        (void)deltaTime;
    }
}
