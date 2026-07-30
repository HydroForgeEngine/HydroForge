#include "Scene.hpp"

namespace HydroForge
{
    void Scene::AddEntity(const Entity& entity)
    {
        m_Entities.push_back(entity);
    }

    std::vector<Entity>& Scene::GetEntities()
    {
        return m_Entities;
    }
}
