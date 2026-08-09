#include "PSPPlatform.hpp"

namespace HydroForge
{
    bool PSPPlatform::Initialize()
    {
        return true;
    }

    void PSPPlatform::Update()
    {
    }

    void PSPPlatform::Shutdown()
    {
    }

    PlatformType PSPPlatform::GetType() const
    {
        return PlatformType::PSP;
    }

    const char* PSPPlatform::GetName() const
    {
        return "PlayStation Portable";
    }

    int PSPPlatform::GetScreenWidth() const
    {
        return 480;
    }

    int PSPPlatform::GetScreenHeight() const
    {
        return 272;
    }
}
