#pragma once

#include <string>

namespace HydroForge
{
    class AudioLoader
    {
    public:
        static bool LoadAudio(const std::string& path);
    };
}
