#include "AssetLoader.hpp"
#include "../core/Logger.hpp"

namespace HydroForge
{
    bool AssetLoader::Load(const std::string& path)
    {
        Logger::Info("Loading asset: " + path);
        return true;
    }
}
