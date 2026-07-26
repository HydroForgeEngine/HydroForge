#include "RenderAPI.hpp"

namespace HydroForge
{
    GraphicsAPI RenderAPI::s_API = GraphicsAPI::OpenGL;

    void RenderAPI::SetAPI(GraphicsAPI api)
    {
        s_API = api;
    }

    GraphicsAPI RenderAPI::GetAPI()
    {
        return s_API;
    }
}
