#include "Matrix4.hpp"

namespace HydroForge
{
    Matrix4::Matrix4()
    {
        for(int i = 0; i < 4; i++)
            for(int j = 0; j < 4; j++)
                m[i][j] = 0.0f;
    }

    Matrix4 Matrix4::Identity()
    {
        Matrix4 mat;

        for(int i = 0; i < 4; i++)
            mat.m[i][i] = 1.0f;

        return mat;
    }
}
