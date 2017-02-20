/*
 * @file
 * @author Vsevolod (Seva) Ivanov
*/

#pragma once

#include <stdio.h>

#define GLEW_STATIC
#include <GL/glew.h>
#include <GLFW/glfw3.h>

class Window
{
    public:
        Window(const int w, const int h,
               const char* title);
        ~Window();

        GLFWwindow* get() const;
        GLuint height() const;
        GLuint width() const;

        void height(const GLuint height);
        void width(const GLuint widht);

    private:
        GLuint WIDTH;
        GLuint HEIGHT;
        GLFWwindow* window;
};
