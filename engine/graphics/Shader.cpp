#include "Shader.hpp"
#include "../core/Logger.hpp"

namespace HydroForge
{
    Shader::Shader()
    {
    }

    bool Shader::Load(const std::string& vertexShader,
                      const std::string& fragmentShader)
    {
        m_VertexShader = vertexShader;
        m_FragmentShader = fragmentShader;

        Logger::Info("Shader loaded.");

        return true;
    }

    void Shader::Bind()
    {
    }

    void Shader::Unbind()
    {
    }
}
