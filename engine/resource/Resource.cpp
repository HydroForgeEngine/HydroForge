#include "Resource.hpp"

namespace HydroForge
{
    Resource::Resource()
        : m_Loaded(false)
    {
    }

    Resource::Resource(const std::string& path)
        : m_Path(path), m_Loaded(false)
    {
    }

    const std::string& Resource::GetPath() const
    {
        return m_Path;
    }

    bool Resource::IsLoaded() const
    {
        return m_Loaded;
    }
}
