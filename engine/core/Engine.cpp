#include "Engine.hpp"
#include <iostream>

namespace HydroForge
{
    Engine::Engine()
        : m_Running(false)
    {
    }

    bool Engine::Initialize()
    {
        std::cout << "HydroForge Engine Initialized!" << std::endl;
        m_Running = true;
        return true;
    }

    void Engine::Run()
    {
        while (m_Running)
        {
            // Main Loop
            break;
        }
    }

    void Engine::Shutdown()
    {
        std::cout << "HydroForge Engine Shutdown!" << std::endl;
        m_Running = false;
    }
}
