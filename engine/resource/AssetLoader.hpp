#pragma once

#include <string>

namespace HydroForge
{
    class AssetLoader
    {
    public:
        static bool Load(const std::string& path);
    };
}
