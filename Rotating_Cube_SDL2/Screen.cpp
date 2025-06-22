#include <SDL2/SDL.h>
#include <vector>

class Screen {
    SDL_Event e; //This is used to handle input/events like keyboard presses, mouse movement, etc
    SDL_Window* window; //window is a pointer to an SDL_Window--the actual window shown on screen
    SDL_Renderer* renderer; //renderer is a pointer to an SDL_Renderer--used to draw graphics inside the window
    std::vector<SDL_FPoint> points; //Declares a std::vector (a dynamic array) named points
                                    //Stores SDL_FPoint structures, which represent floating-point x/y coordinates
                                    //(good for drawing things smoothly or precisely)

    Screen() {
        SDL_Init(SDL_INIT_VIDEO);
        SDL_CreateWindowAndRenderer(640*2, 480*2, 0, &window,&renderer);
        SDL_RenderSetScale(renderer,2,2);
    }

    void pixel(float x, float y) {
        points.emplace_back(x,y); //draws the pixels
    }

    void show() {
        SDL_SetRenderDrawColor(renderer,0,0,0,255);
        SDL_RenderClear(renderer);

        SDL_SetRenderDrawColor(renderer,0,0,0,255);
        SDL_RenderCLear(renderer);

        SDL_SetRenderDrawColor(renderer,255,255,255,255);
        for (auto& point : points) {
            SDL_RenderDrawPointF(renderer,point.x,point.y);
        }
        SDL_RenderPresent(renderer);
    }


};
