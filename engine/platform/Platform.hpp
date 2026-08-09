#pragma once

#include <string>

namespace HydroForge
{
    enum class PlatformType
    {
        Unknown,
        Windows,
        Nintendo3DS,
        Wii,
        PSP
    };

    class Platform
    {
    public:
        virtual ~Platform() = default;

        virtual bool Initialize() = 0;
        virtual void Update() = 0;
        virtual void Shutdown() = 0;

        virtual PlatformType GetType() const = 0;
        virtual const char* GetName() const = 0;

        virtual int GetScreenWidth() const = 0;
        virtual int GetScreenHeight() const = 0;
    };
}
