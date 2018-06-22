/*
	in this file: just some code for initializing windows 'n' stuff
*/

#pragma once

#include <SDL.h>
#include <SDL_image.h>
#include <cstdio>

bool init (SDL_Window *& window, SDL_Renderer *& renderer, int width, int height);
SDL_Texture * load_image(const char * path, SDL_Renderer * renderer);
