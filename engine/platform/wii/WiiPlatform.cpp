#include "WiiPlatform.hpp"

namespace HydroForge
{
    bool WiiPlatform::Initialize()
    {
        return true;
    }

    void WiiPlatform::Update()
    {
    }

    void WiiPlatform::Shutdown()
    {
    }

    PlatformType WiiPlatform::GetType() const
    {
        return PlatformType::Wii;
    }

    const char* WiiPlatform::GetName() const
    {
        return "Nintendo Wii";
    }

    int WiiPlatform::GetScreenWidth() const
    {
        return 640;
    }

    int WiiPlatform::GetScreenHeight() const
    {
        return 480;
    }
}
