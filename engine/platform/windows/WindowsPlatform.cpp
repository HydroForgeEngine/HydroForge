#include "WindowsPlatform.hpp"

namespace HydroForge
{
    bool WindowsPlatform::Initialize()
    {
        return true;
    }

    void WindowsPlatform::Update()
    {
    }

    void WindowsPlatform::Shutdown()
    {
    }

    PlatformType WindowsPlatform::GetType() const
    {
        return PlatformType::Windows;
    }

    const char* WindowsPlatform::GetName() const
    {
        return "Windows";
    }

    int WindowsPlatform::GetScreenWidth() const
    {
        return m_Width;
    }

    int WindowsPlatform::GetScreenHeight() const
    {
        return m_Height;
    }
}
