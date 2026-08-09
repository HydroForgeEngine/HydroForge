#include "UIManager.hpp"
#include "../core/Logger.hpp"

namespace HydroForge
{
    std::vector<std::shared_ptr<Canvas>> UIManager::s_Canvases;

    bool UIManager::Initialize()
    {
        Logger::Info("UI Manager initialized.");
        return true;
    }

    void UIManager::Update(float deltaTime)
    {
        for (auto& canvas : s_Canvases)
        {
            if (canvas)
                canvas->Update(deltaTime);
        }
    }

    void UIManager::Draw()
    {
        for (auto& canvas : s_Canvases)
        {
            if (canvas)
                canvas->Draw();
        }
    }

    void UIManager::Shutdown()
    {
        s_Canvases.clear();

        Logger::Info("UI Manager shutdown.");
    }

    void UIManager::AddCanvas(std::shared_ptr<Canvas> canvas)
    {
        if (canvas)
            s_Canvases.push_back(canvas);
    }
}
