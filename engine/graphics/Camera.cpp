#include "Camera.hpp"

namespace HydroForge
{
    Camera::Camera()
        : m_X(0), m_Y(0), m_Z(0)
    {
    }

    void Camera::SetPosition(float x, float y, float z)
    {
        m_X = x;
        m_Y = y;
        m_Z = z;
    }
}
