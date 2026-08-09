#include "Canvas.hpp"

namespace HydroForge
{
    void Canvas::AddElement(std::shared_ptr<UIElement> element)
    {
        if (element)
            m_Elements.push_back(element);
    }

    void Canvas::Update(float deltaTime)
    {
        for (auto& element : m_Elements)
        {
            if (element && element->IsVisible())
                element->Update(deltaTime);
        }
    }

    void Canvas::Draw()
    {
        for (auto& element : m_Elements)
        {
            if (element && element->IsVisible())
                element->Draw();
        }
    }

    const std::vector<std::shared_ptr<UIElement>>&
    Canvas::GetElements() const
    {
        return m_Elements;
    }
}
