#include "MainWindow.h"

#include <SDL.h>
#include <cstdio>
#include <iostream>

#include "utils.h"

void MainWindow::create(){
    //Logging library example
    spdlog::info("Creating basic SDL window...");

    //The window we'll be rendering to
    SDL_Window* window = NULL;
    
    //The surface contained by the window
    SDL_Surface* screenSurface = NULL;

    //Initialize SDL
    if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
    {
        std::cout << "SDL could not initialize! SDL_Error: " << SDL_GetError() << "\n";
    } else {
        //Create window
        window = SDL_CreateWindow( m_title.c_str(), SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, m_width, m_height, SDL_WINDOW_SHOWN );

        if( window == NULL )
        {
            std::cout << "Window could not be created! SDL_Error: " << SDL_GetError() << "\n";
        }
        else
        {
            //Get window surface
            screenSurface = SDL_GetWindowSurface( window );

            //Fill the surface white
            SDL_FillRect( screenSurface, NULL, SDL_MapRGB( screenSurface->format, 0xFF, 0xFF, 0xFF ) );
            
            //Update the surface
            SDL_UpdateWindowSurface( window );

            //Wait two seconds
            SDL_Delay( 2000 );
        }
    }

    //Logging library example
    spdlog::info("Destroying window...");

    //Destroy window
    SDL_DestroyWindow( window );

    //Quit SDL subsystems
    SDL_Quit();
}