#include "CApp.h"
#include <SDL2/SDL_render.h>

void CApp::OnRender() {
  SDL_RenderClear(Renderer);
  SDL_SetRenderDrawColor(Renderer, 255, 255, 255, 255);
  SDL_RenderPresent(Renderer);
}
