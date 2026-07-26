#include "Vector2.hpp"
#include <cmath>

namespace HydroForge
{
    Vector2::Vector2()
        : x(0.0f), y(0.0f)
    {
    }

    Vector2::Vector2(float x, float y)
        : x(x), y(y)
    {
    }

    Vector2 Vector2::Add(const Vector2& other) const
    {
        return Vector2(x + other.x, y + other.y);
    }

    Vector2 Vector2::Subtract(const Vector2& other) const
    {
        return Vector2(x - other.x, y - other.y);
    }

    Vector2 Vector2::Multiply(float scalar) const
    {
        return Vector2(x * scalar, y * scalar);
    }

    Vector2 Vector2::Divide(float scalar) const
    {
        return Vector2(x / scalar, y / scalar);
    }

    float Vector2::Length() const
    {
        return std::sqrt(x * x + y * y);
    }

    Vector2 Vector2::Normalize() const
    {
        float len = Length();

        if (len == 0.0f)
            return Vector2();

        return Vector2(x / len, y / len);
    }
}
