#pragma once

#include "../math/Vector3.hpp"

namespace HydroForge
{
    class PhysicsWorld
    {
    public:
        PhysicsWorld();

        void SetGravity(const Vector3& gravity);
        const Vector3& GetGravity() const;

        void Step(float deltaTime);

    private:
        Vector3 m_Gravity;
    };
}
