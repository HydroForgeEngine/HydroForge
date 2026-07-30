#pragma once

#include <string>

namespace HydroForge
{
    class ScriptComponent
    {
    public:
        ScriptComponent();

        void SetScript(const std::string& path);
        const std::string& GetScript() const;

    private:
        std::string m_Script;
    };
}
