#pragma once

#include <string>
#include "Transform.hpp"

namespace HydroForge
{
    class Entity
    {
    public:
        Entity(const std::string& name);

        const std::string& GetName() const;
        Transform& GetTransform();

    private:
        std::string m_Name;
        Transform m_Transform;
    };
}
