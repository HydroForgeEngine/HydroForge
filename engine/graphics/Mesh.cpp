#include "Mesh.hpp"

namespace HydroForge
{
    Mesh::Mesh()
    {
    }

    void Mesh::AddVertex(const Vertex& vertex)
    {
        m_Vertices.push_back(vertex);
    }

    const std::vector<Vertex>& Mesh::GetVertices() const
    {
        return m_Vertices;
    }
}
