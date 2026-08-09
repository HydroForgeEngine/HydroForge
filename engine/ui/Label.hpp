#pragma once

#include "UIElement.hpp"

namespace HydroForge
{
    class Label : public UIElement
    {
    public:
        Label();

        void SetText(const std::string& text);
        const std::string& GetText() const;

        void Draw() override;

    private:
        std::string m_Text;
    };
}
