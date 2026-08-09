#pragma once

#include "../Platform.hpp"

namespace HydroForge
{
    class WindowsPlatform : public Platform
    {
    public:
        bool Initialize() override;
        void Update() override;
        void Shutdown() override;

        PlatformType GetType() const override;
        const char* GetName() const override;

        int GetScreenWidth() const override;
        int GetScreenHeight() const override;

    private:
        int m_Width = 1280;
        int m_Height = 720;
    };
}
