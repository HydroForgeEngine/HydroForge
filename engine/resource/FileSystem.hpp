#pragma once

#include <string>

namespace HydroForge
{
    class FileSystem
    {
    public:
        static bool Exists(const std::string& path);
    };
}
