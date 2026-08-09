#include "ToolchainDetector.hpp"

#ifdef _WIN32
    #include <cstdlib>
#endif

namespace HydroForge
{
    Toolchain ToolchainDetector::Detect(BuildTarget target)
    {
        switch (target)
        {
            case BuildTarget::Windows:
                return Toolchain(ToolchainType::MSVC);

            case BuildTarget::Nintendo3DS:
                return Toolchain(ToolchainType::DevkitARM);

            case BuildTarget::Wii:
                return Toolchain(ToolchainType::DevkitPPC);

            case BuildTarget::PSP:
                return Toolchain(ToolchainType::PSPDev);
        }

        return Toolchain();
    }

    bool ToolchainDetector::IsInstalled(BuildTarget target)
    {
        Toolchain toolchain = Detect(target);

        return toolchain.IsValid();
    }
}
