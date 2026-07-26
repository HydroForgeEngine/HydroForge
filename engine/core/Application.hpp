#pragma once

#include "Engine.hpp"

namespace HydroForge
{
    class Application
    {
    public:
        Application();

        void Start();

    private:
        Engine m_Engine;
    };
}
