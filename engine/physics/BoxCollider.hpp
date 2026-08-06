#pragma once

#include "Collider.hpp"

namespace HydroForge
{
    class BoxCollider : public Collider
    {
    public:
        BoxCollider();

        void SetSize(const Vector3& size);
        const Vector3& GetSize() const;

    private:
        Vector3 m_Size;
    };
}
