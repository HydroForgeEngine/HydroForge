#pragma once

namespace HydroForge
{
    class Vector2
    {
    public:
        float x;
        float y;

        Vector2();
        Vector2(float x, float y);

        Vector2 Add(const Vector2& other) const;
        Vector2 Subtract(const Vector2& other) const;
        Vector2 Multiply(float scalar) const;
        Vector2 Divide(float scalar) const;

        float Length() const;
        Vector2 Normalize() const;
    };
}
