#pragma once

#include <memory>
#include <vector>

#include "UIElement.hpp"

namespace HydroForge
{
    class Canvas
    {
    public:
        void AddElement(std::shared_ptr<UIElement> element);

        void Update(float deltaTime);
        void Draw();

        const std::vector<std::shared_ptr<UIElement>>&
        GetElements() const;

    private:
        std::vector<std::shared_ptr<UIElement>> m_Elements;
    };
}
