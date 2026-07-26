#include "Application.hpp"

namespace HydroForge
{
    Application::Application()
    {
    }

    void Application::Start()
    {
        if (m_Engine.Initialize())
        {
            m_Engine.Run();
            m_Engine.Shutdown();
        }
    }
}
