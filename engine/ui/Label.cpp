#include "Label.hpp"

namespace HydroForge
{
    Label::Label()
        : m_Text("")
    {
    }

    void Label::SetText(const std::string& text)
    {
        m_Text = text;
    }

    const std::string& Label::GetText() const
    {
        return m_Text;
    }

    void Label::Draw()
    {
    }
}
