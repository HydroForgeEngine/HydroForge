#pragma once

#include <string>

namespace HydroForge
{
    class Shader
    {
    public:
        Shader();

        bool Load(const std::string& vertexShader,
                  const std::string& fragmentShader);

        void Bind();
        void Unbind();

    private:
        std::string m_VertexShader;
        std::string m_FragmentShader;
    };
}
