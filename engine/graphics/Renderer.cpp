#include "Renderer.hpp"
#include "../core/Logger.hpp"

namespace HydroForge
{
    void Renderer::Initialize()
    {
        Logger::Info("Renderer initialized.");
    }

    void Renderer::BeginFrame()
    {
    }

    void Renderer::EndFrame()
    {
    }

    void Renderer::Shutdown()
    {
        Logger::Info("Renderer shutdown.");
    }
}
