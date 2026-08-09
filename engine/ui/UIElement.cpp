#include "UIElement.hpp"

namespace HydroForge
{
    UIElement::UIElement()
        : m_Position(0.0f, 0.0f),
          m_Size(100.0f, 100.0f),
          m_Visible(true)
    {
    }

    void UIElement::SetPosition(const Vector2& position)
    {
        m_Position = position;
    }

    void UIElement::SetSize(const Vector2& size)
    {
        m_Size = size;
    }

    const Vector2& UIElement::GetPosition() const
    {
        return m_Position;
    }

    const Vector2& UIElement::GetSize() const
    {
        return m_Size;
    }

    void UIElement::SetVisible(bool visible)
    {
        m_Visible = visible;
    }

    bool UIElement::IsVisible() const
    {
        return m_Visible;
    }

    void UIElement::SetName(const std::string& name)
    {
        m_Name = name;
    }

    const std::string& UIElement::GetName() const
    {
        return m_Name;
    }

    void UIElement::Update(float deltaTime)
    {
        (void)deltaTime;
    }

    void UIElement::Draw()
    {
    }
}
