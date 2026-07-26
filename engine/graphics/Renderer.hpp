#pragma once

namespace HydroForge
{
    class Renderer
    {
    public:
        static void Initialize();
        static void BeginFrame();
        static void EndFrame();
        static void Shutdown();
    };
}
