#include "Nintendo3DSPlatform.hpp"

namespace HydroForge
{
    bool Nintendo3DSPlatform::Initialize()
    {
        return true;
    }

    void Nintendo3DSPlatform::Update()
    {
    }

    void Nintendo3DSPlatform::Shutdown()
    {
    }

    PlatformType Nintendo3DSPlatform::GetType() const
    {
        return PlatformType::Nintendo3DS;
    }

    const char* Nintendo3DSPlatform::GetName() const
    {
        return "Nintendo 3DS";
    }

    int Nintendo3DSPlatform::GetScreenWidth() const
    {
        return 400;
    }

    int Nintendo3DSPlatform::GetScreenHeight() const
    {
        return 240;
    }

    int Nintendo3DSPlatform::GetBottomScreenWidth() const
    {
        return 320;
    }

    int Nintendo3DSPlatform::GetBottomScreenHeight() const
    {
        return 240;
    }
}
