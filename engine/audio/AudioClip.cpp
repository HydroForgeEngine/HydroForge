#include "AudioClip.hpp"

namespace HydroForge
{
    bool AudioClip::Load(const std::string& path)
    {
        m_Path = path;
        return true;
    }

    const std::string& AudioClip::GetPath() const
    {
        return m_Path;
    }
}
