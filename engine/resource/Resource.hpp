#pragma once

#include <string>

namespace HydroForge
{
    class Resource
    {
    public:
        Resource();
        explicit Resource(const std::string& path);

        const std::string& GetPath() const;
        bool IsLoaded() const;

    protected:
        std::string m_Path;
        bool m_Loaded;
    };
}
