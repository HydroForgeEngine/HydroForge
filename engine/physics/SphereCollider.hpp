#pragma once

#include "Collider.hpp"

namespace HydroForge
{
    class SphereCollider : public Collider
    {
    public:
        SphereCollider();

        void SetRadius(float radius);
        float GetRadius() const;

    private:
        float m_Radius;
    };
}
