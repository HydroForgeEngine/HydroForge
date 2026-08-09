#include "Button.hpp"

namespace HydroForge
{
    Button::Button()
        : m_Text("")
    {
    }

    void Button::SetText(const std::string& text)
    {
        m_Text = text;
    }

    const std::string& Button::GetText() const
    {
        return m_Text;
    }

    void Button::SetOnClick(std::function<void()> callback)
    {
        m_OnClick = callback;
    }

    void Button::Click()
    {
        if (m_OnClick)
            m_OnClick();
    }

    void Button::Draw()
    {
    }
}
