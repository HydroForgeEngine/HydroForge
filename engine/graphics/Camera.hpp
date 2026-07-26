#pragma once

namespace HydroForge
{
    class Camera
    {
    public:
        Camera();

        void SetPosition(float x, float y, float z);

    private:
        float m_X;
        float m_Y;
        float m_Z;
    };
}
