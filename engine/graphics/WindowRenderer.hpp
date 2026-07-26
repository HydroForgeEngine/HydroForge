#pragma once

namespace HydroForge
{
    class WindowRenderer
    {
    public:
        WindowRenderer();

        void Initialize();

        void Clear();

        void Present();

        void Shutdown();
    };
}
