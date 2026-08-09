#pragma once

#include <string>
#include "../math/Vector2.hpp"

namespace HydroForge
{
    class UIElement
    {
    public:
        UIElement();
        virtual ~UIElement() = default;

        void SetPosition(const Vector2& position);
        void SetSize(const Vector2& size);

        const Vector2& GetPosition() const;
        const Vector2& GetSize() const;

        void SetVisible(bool visible);
        bool IsVisible() const;

        void SetName(const std::string& name);
        const std::string& GetName() const;

        virtual void Update(float deltaTime);
        virtual void Draw();

    protected:
        std::string m_Name;

        Vector2 m_Position;
        Vector2 m_Size;

        bool m_Visible;
    };
}
