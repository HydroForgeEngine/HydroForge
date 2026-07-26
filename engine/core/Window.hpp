#pragma once

#include <string>

namespace HydroForge
{
    class Window
    {
    public:
        Window(int width, int height, const std::string& title);

        bool Create();
        void Close();

        int GetWidth() const;
        int GetHeight() const;
        const std::string& GetTitle() const;

    private:
        int m_Width;
        int m_Height;
        std::string m_Title;
    };
}
