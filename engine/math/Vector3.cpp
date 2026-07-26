#include "Vector3.hpp"
#include <cmath>

namespace HydroForge
{
    Vector3::Vector3()
        : x(0), y(0), z(0)
    {
    }

    Vector3::Vector3(float x, float y, float z)
        : x(x), y(y), z(z)
    {
    }

    Vector3 Vector3::Add(const Vector3& v) const
    {
        return Vector3(x + v.x, y + v.y, z + v.z);
    }

    Vector3 Vector3::Subtract(const Vector3& v) const
    {
        return Vector3(x - v.x, y - v.y, z - v.z);
    }

    Vector3 Vector3::Multiply(float scalar) const
    {
        return Vector3(x * scalar, y * scalar, z * scalar);
    }

    float Vector3::Length() const
    {
        return std::sqrt(x*x + y*y + z*z);
    }

    Vector3 Vector3::Normalize() const
    {
        float len = Length();

        if (len == 0.0f)
            return Vector3();

        return Vector3(x/len, y/len, z/len);
    }
}
