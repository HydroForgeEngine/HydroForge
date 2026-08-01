#include "AudioLoader.hpp"
#include "../core/Logger.hpp"

namespace HydroForge
{
    bool AudioLoader::LoadAudio(const std::string& path)
    {
        Logger::Info("Loading audio: " + path);
        return true;
    }
}
