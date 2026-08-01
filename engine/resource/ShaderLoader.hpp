#pragma once

#include <string>

namespace HydroForge
{
    class ShaderLoader
    {
    public:
        static bool LoadShader(
            const std::string& vertex,
            const std::string& fragment);
    };
}
