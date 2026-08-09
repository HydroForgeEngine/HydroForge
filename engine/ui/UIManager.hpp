#pragma once

#include <memory>
#include <vector>

#include "Canvas.hpp"

namespace HydroForge
{
    class UIManager
    {
    public:
        static bool Initialize();
        static void Update(float deltaTime);
        static void Draw();
        static void Shutdown();

        static void AddCanvas(std::shared_ptr<Canvas> canvas);

    private:
        static std::vector<std::shared_ptr<Canvas>> s_Canvases;
    };
}
