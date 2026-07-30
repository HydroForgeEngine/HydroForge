#include "ScriptComponent.hpp"

namespace HydroForge
{
    ScriptComponent::ScriptComponent()
    {
    }

    void ScriptComponent::SetScript(const std::string& path)
    {
        m_Script = path;
    }

    const std::string& ScriptComponent::GetScript() const
    {
        return m_Script;
    }
}
