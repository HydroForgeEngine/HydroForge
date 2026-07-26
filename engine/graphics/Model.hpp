#pragma once

#include <string>

namespace HydroForge
{
    class Model
    {
    public:
        Model();

        bool Load(const std::string& path);
        const std::string& GetPath() const;

    private:
        std::string m_Path;
    };
}
