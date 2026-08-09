#pragma once

#include "UIElement.hpp"

namespace HydroForge
{
    class Panel : public UIElement
    {
    public:
        Panel();

        void SetOpacity(float opacity);
        float GetOpacity() const;

        void Draw() override;

    private:
        float m_Opacity;
    };
}
