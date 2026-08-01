#include "ModelLoader.hpp"
#include "../core/Logger.hpp"

namespace HydroForge
{
    bool ModelLoader::LoadModel(const std::string& path)
    {
        Logger::Info("Loading model: " + path);
        return true;
    }
}
