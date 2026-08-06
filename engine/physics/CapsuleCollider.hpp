#pragma once

#include "Collider.hpp"

namespace HydroForge
{
    class CapsuleCollider : public Collider
    {
    public:
        CapsuleCollider();

        void SetRadius(float radius);
        void SetHeight(float height);

        float GetRadius() const;
        float GetHeight() const;

    private:
        float m_Radius;
        float m_Height;
    };
}
