#pragma once

#include <string>

namespace HydroForge
{
    class AudioDevice
    {
    public:
        bool Open(const std::string& deviceName);
        void Close();

    private:
        std::string m_DeviceName;
    };
}
