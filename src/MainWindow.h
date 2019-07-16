/**
 * Represents and SDL device.
 * 
 * Is responsible for drawing and managing SDL calls
 */

#pragma once

#include <cstdio>
#include <string>

class MainWindow{
    private:
        int m_width;
        int m_height;
        std::string m_title;

    public:
        /**
         * @param width
         * @param height
         * @param title of the window
         */
        MainWindow(int width, int height, std::string title)
        : m_width {width}, m_height {height}, m_title {title}
        {}

        /**
         * Draws main window with specified properties
         */
        void create();

};