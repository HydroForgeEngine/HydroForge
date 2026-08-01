#include "ResourceManager.hpp"
#include "../core/Logger.hpp"

namespace HydroForge
{
    std::unordered_map<
        std::string,
        std::shared_ptr<Resource>
    > ResourceManager::s_Resources;

    void ResourceManager::Initialize()
    {
        Logger::Info("Resource Manager initialized.");
    }

    void ResourceManager::Shutdown()
    {
        s_Resources.clear();
        Logger::Info("Resource Manager shutdown.");
    }

    void ResourceManager::Register(
        const std::string& name,
        std::shared_ptr<Resource> resource)
    {
        s_Resources[name] = resource;
    }

    std::shared_ptr<Resource> ResourceManager::Get(
        const std::string& name)
    {
        return s_Resources[name];
    }
}
