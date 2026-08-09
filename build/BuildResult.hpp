#pragma once

#include <string>

namespace HydroForge
{
    enum class BuildStatus
    {
        Success,
        Failed,
        ToolchainNotFound,
        InvalidProject
    };

    struct BuildResult
    {
        BuildStatus Status = BuildStatus::Failed;

        std::string OutputPath;
        std::string Message;

        bool Succeeded() const
        {
            return Status == BuildStatus::Success;
        }
    };
}
