#pragma once

namespace HydroForge
{
    class Engine
    {
    public:
        Engine();

        bool Initialize();
        void Run();
        void Shutdown();

    private:
        bool m_Running;
    };
}
