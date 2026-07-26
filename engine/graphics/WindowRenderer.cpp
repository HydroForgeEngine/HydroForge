#include "WindowRenderer.hpp"
#include "../core/Logger.hpp"

namespace HydroForge
{
    WindowRenderer::WindowRenderer()
    {
    }

    void WindowRenderer::Initialize()
    {
        Logger::Info("Window Renderer initialized.");
    }

    void WindowRenderer::Clear()
    {
    }

    void WindowRenderer::Present()
    {
    }

    void WindowRenderer::Shutdown()
    {
        Logger::Info("Window Renderer shutdown.");
    }
}
