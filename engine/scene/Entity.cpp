#include "Entity.hpp"

namespace HydroForge
{
    Entity::Entity(const std::string& name)
        : m_Name(name)
    {
    }

    const std::string& Entity::GetName() const
    {
        return m_Name;
    }

    Transform& Entity::GetTransform()
    {
        return m_Transform;
    }
}
