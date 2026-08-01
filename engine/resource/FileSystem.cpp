#include "FileSystem.hpp"
#include <filesystem>

namespace HydroForge
{
    bool FileSystem::Exists(const std::string& path)
    {
        return std::filesystem::exists(path);
    }
}
