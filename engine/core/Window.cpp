#include "Window.hpp"
#include <iostream>

namespace HydroForge
{
    Window::Window(int width, int height, const std::string& title)
        : m_Width(width), m_Height(height), m_Title(title)
    {
    }

    bool Window::Create()
    {
        std::cout << "Creating window: " << m_Title << std::endl;
        return true;
    }

    void Window::Close()
    {
        std::cout << "Window closed." << std::endl;
    }

    int Window::GetWidth() const
    {
        return m_Width;
    }

    int Window::GetHeight() const
    {
        return m_Height;
    }

    const std::string& Window::GetTitle() const
    {
        return m_Title;
    }
}
