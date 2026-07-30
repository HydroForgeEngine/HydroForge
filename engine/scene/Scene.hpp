#pragma once

#include <vector>
#include "Entity.hpp"

namespace HydroForge
{
    class Scene
    {
    public:
        void AddEntity(const Entity& entity);

        std::vector<Entity>& GetEntities();

    private:
        std::vector<Entity> m_Entities;
    };
}
