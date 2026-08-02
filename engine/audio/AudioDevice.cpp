#include "AudioDevice.hpp"

namespace HydroForge
{
    bool AudioDevice::Open(const std::string& deviceName)
    {
        m_DeviceName = deviceName;
        return true;
    }

    void AudioDevice::Close()
    {
    }
}
