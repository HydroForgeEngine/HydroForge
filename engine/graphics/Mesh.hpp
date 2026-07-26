#pragma once

#include <vector>
#include "Vertex.hpp"

namespace HydroForge
{
    class Mesh
    {
    public:
        Mesh();

        void AddVertex(const Vertex& vertex);

        const std::vector<Vertex>& GetVertices() const;

    private:
        std::vector<Vertex> m_Vertices;
    };
}
