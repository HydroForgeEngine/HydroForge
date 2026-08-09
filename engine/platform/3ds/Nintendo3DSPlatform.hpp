#pragma once

#include "../Platform.hpp"

namespace HydroForge
{
    class Nintendo3DSPlatform : public Platform
    {
    public:
        bool Initialize() override;
        void Update() override;
        void Shutdown() override;

        PlatformType GetType() const override;
        const char* GetName() const override;

        int GetScreenWidth() const override;
        int GetScreenHeight() const override;

        int GetBottomScreenWidth() const;
        int GetBottomScreenHeight() const;
    };
}
