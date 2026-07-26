#pragma once

namespace HydroForge
{
    class Vector3
    {
    public:
        float x;
        float y;
        float z;

        Vector3();
        Vector3(float x, float y, float z);

        Vector3 Add(const Vector3&) const;
        Vector3 Subtract(const Vector3&) const;
        Vector3 Multiply(float scalar) const;

        float Length() const;
        Vector3 Normalize() const;
    };
}
