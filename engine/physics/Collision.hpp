#pragma once

#include "../math/Vector3.hpp"

namespace HydroForge
{
    class Collision
    {
    public:
        Collision();

        void SetPoint(const Vector3& point);
        void SetNormal(const Vector3& normal);
        void SetDepth(float depth);

        const Vector3& GetPoint() const;
        const Vector3& GetNormal() const;
        float GetDepth() const;

    private:
        Vector3 m_Point;
        Vector3 m_Normal;
        float m_Depth;
    };
}
