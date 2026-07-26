#pragma once

namespace HydroForge
{
    enum class GraphicsAPI
    {
        None,
        OpenGL,
        Vulkan,
        DirectX11,
        DirectX12,
        Metal
    };

    class RenderAPI
    {
    public:
        static void SetAPI(GraphicsAPI api);
        static GraphicsAPI GetAPI();

    private:
        static GraphicsAPI s_API;
    };
}
