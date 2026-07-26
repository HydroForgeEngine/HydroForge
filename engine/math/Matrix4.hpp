#pragma once

namespace HydroForge
{
    class Matrix4
    {
    public:
        float m[4][4];

        Matrix4();

        static Matrix4 Identity();
    };
}
