#include "CApp.h"
#include <SDL2/SDL_render.h>

bool CApp::OnInit() {
  if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
    return false;
  };
  Window =
      SDL_CreateWindow("Hola mundo", SDL_WINDOWPOS_CENTERED,
                       SDL_WINDOWPOS_CENTERED, 500, 500, 0);
  if (Window == NULL) {
    return false;
  }
  Renderer = SDL_CreateRenderer(Window, -1, 0);
  return true;
}
