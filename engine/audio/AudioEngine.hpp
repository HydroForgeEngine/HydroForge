#pragma once

namespace HydroForge
{
    class AudioEngine
    {
    public:
        static bool Initialize();
        static void Update();
        static void Shutdown();
    };
}
