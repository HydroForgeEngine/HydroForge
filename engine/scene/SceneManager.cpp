#include "SceneManager.hpp"

namespace HydroForge
{
    Scene SceneManager::s_CurrentScene;

    Scene& SceneManager::GetCurrentScene()
    {
        return s_CurrentScene;
    }
}
