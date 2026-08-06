#pragma once

#include "../math/Vector3.hpp"

namespace HydroForge
{
    struct RaycastHit
    {
        bool Hit = false;
        Vector3 Point;
        Vector3 Normal;
        float Distance = 0.0f;
    };

    class Raycast
    {
    public:
        Raycast();

        void SetOrigin(const Vector3& origin);
        void SetDirection(const Vector3& direction);
        void SetMaxDistance(float distance);

        const Vector3& GetOrigin() const;
        const Vector3& GetDirection() const;
        float GetMaxDistance() const;

    private:
        Vector3 m_Origin;
        Vector3 m_Direction;
        float m_MaxDistance;
    };
}
