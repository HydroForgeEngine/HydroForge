#pragma once

#include <functional>

#include "UIElement.hpp"

namespace HydroForge
{
    class Button : public UIElement
    {
    public:
        Button();

        void SetText(const std::string& text);
        const std::string& GetText() const;

        void SetOnClick(std::function<void()> callback);

        void Click();

        void Draw() override;

    private:
        std::string m_Text;
        std::function<void()> m_OnClick;
    };
}
