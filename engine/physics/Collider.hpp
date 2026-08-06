#pragma once

#include "../math/Vector3.hpp"

namespace HydroForge
{
    enum class ColliderType
    {
        Box,
        Sphere,
        Capsule,
        Mesh
    };

    class Collider
    {
    public:
        explicit Collider(ColliderType type);
        virtual ~Collider() = default;

        ColliderType GetType() const;

        void SetCenter(const Vector3& center);
        const Vector3& GetCenter() const;

    protected:
        ColliderType m_Type;
        Vector3 m_Center;
    };
}
