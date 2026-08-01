#pragma once

#include <memory>
#include <string>
#include <unordered_map>

#include "Resource.hpp"

namespace HydroForge
{
    class ResourceManager
    {
    public:
        static void Initialize();
        static void Shutdown();

        static void Register(const std::string& name,
                             std::shared_ptr<Resource> resource);

        static std::shared_ptr<Resource> Get(const std::string& name);

    private:
        static std::unordered_map<
            std::string,
            std::shared_ptr<Resource>
        > s_Resources;
    };
}
