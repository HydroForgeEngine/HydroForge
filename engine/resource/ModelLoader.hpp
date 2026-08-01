#pragma once

#include <string>

namespace HydroForge
{
    class ModelLoader
    {
    public:
        static bool LoadModel(const std::string& path);
    };
}
