#include <cstdio>
#include "MainWindow.h"

//Screen dimension constants
const std::size_t SCREEN_WIDTH = 640;
const std::size_t SCREEN_HEIGHT = 480;

int main(int argc, char **argv) {
    MainWindow mainWindow{SCREEN_WIDTH, SCREEN_HEIGHT, "EmuGB"};
    mainWindow.create();
    
    return 0;
}