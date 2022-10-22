#include "CApp.h"
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_video.h>

void CApp::OnCleanup(){
  SDL_DestroyRenderer(Renderer);
  SDL_DestroyWindow(Window);
  SDL_Quit();
}


