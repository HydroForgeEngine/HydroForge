#pragma once

#include "Scene.hpp"

namespace HydroForge
{
    class SceneManager
    {
    public:
        static Scene& GetCurrentScene();

    private:
        static Scene s_CurrentScene;
    };
}
