#include "AudioEngine.hpp"
#include "../core/Logger.hpp"

namespace HydroForge
{
    bool AudioEngine::Initialize()
    {
        Logger::Info("Audio Engine initialized.");
        return true;
    }

    void AudioEngine::Update()
    {
    }

    void AudioEngine::Shutdown()
    {
        Logger::Info("Audio Engine shutdown.");
    }
}
