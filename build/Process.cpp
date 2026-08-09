#include "Process.hpp"

#include <cstdio>
#include <array>

namespace HydroForge
{
    ProcessResult Process::Run(const std::string& command)
    {
        ProcessResult result;

#ifdef _WIN32
        FILE* pipe = _popen(
            (command + " 2>&1").c_str(),
            "r"
        );
#else
        FILE* pipe = popen(
            (command + " 2>&1").c_str(),
            "r"
        );
#endif

        if (!pipe)
        {
            result.ExitCode = -1;
            result.Output = "Failed to start process.";
            return result;
        }

        std::array<char, 256> buffer{};

        while (fgets(buffer.data(), buffer.size(), pipe))
        {
            result.Output += buffer.data();
        }

#ifdef _WIN32
        result.ExitCode = _pclose(pipe);
#else
        result.ExitCode = pclose(pipe);
#endif

        return result;
    }
}
