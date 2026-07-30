#pragma once

namespace HydroForge
{
    class Rigidbody
    {
    public:
        float Mass = 1.0f;
        bool UseGravity = true;
        bool IsKinematic = false;
    };
}
