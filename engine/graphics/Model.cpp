#include "Model.hpp"
#include "../core/Logger.hpp"

namespace HydroForge
{
    Model::Model()
    {
    }

    bool Model::Load(const std::string& path)
    {
        m_Path = path;
        Logger::Info("Model loaded: " + path);
        return true;
    }

    const std::string& Model::GetPath() const
    {
        return m_Path;
    }
}
