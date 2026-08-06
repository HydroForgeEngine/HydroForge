#pragma once

namespace HydroForge
{
    class PhysicsEngine
    {
    public:
        static bool Initialize();
        static void Update(float deltaTime);
        static void Shutdown();
    };
}
