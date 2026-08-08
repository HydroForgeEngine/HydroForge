#include "Keyframe.hpp"

namespace HydroForge
{
    Keyframe::Keyframe()
        : Time(0.0f),
          Position(0.0f, 0.0f, 0.0f),
          Scale(1.0f, 1.0f, 1.0f),
          Rotation(0.0f, 0.0f, 0.0f, 1.0f)
    {
    }

    Keyframe::Keyframe(float time)
        : Time(time),
          Position(0.0f, 0.0f, 0.0f),
          Scale(1.0f, 1.0f, 1.0f),
          Rotation(0.0f, 0.0f, 0.0f, 1.0f)
    {
    }
}
