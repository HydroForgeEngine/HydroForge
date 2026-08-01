#include "TextureLoader.hpp"
#include "../core/Logger.hpp"

namespace HydroForge
{
    bool TextureLoader::LoadTexture(const std::string& path)
    {
        Logger::Info("Loading texture: " + path);
        return true;
    }
}
