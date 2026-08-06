#include "PhysicsEngine.hpp"
#include "../core/Logger.hpp"

namespace HydroForge
{
    bool PhysicsEngine::Initialize()
    {
        Logger::Info("Physics Engine initialized.");
        return true;
    }

    void PhysicsEngine::Update(float deltaTime)
    {
        (void)deltaTime;
    }

    void PhysicsEngine::Shutdown()
    {
        Logger::Info("Physics Engine shutdown.");
    }
}
