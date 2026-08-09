#pragma once

#include <string>

namespace HydroForge
{
    struct ProcessResult
    {
        int ExitCode = -1;
        std::string Output;

        bool Success() const
        {
            return ExitCode == 0;
        }
    };

    class Process
    {
    public:
        static ProcessResult Run(const std::string& command);
    };
}
