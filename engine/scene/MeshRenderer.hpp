#pragma once

#include "../graphics/Mesh.hpp"
#include "../graphics/Material.hpp"

namespace HydroForge
{
    class MeshRenderer
    {
    public:
        Mesh MeshData;
        Material MaterialData;
    };
}
