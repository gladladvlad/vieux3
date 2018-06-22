#include "init.h"

bool init (SDL_Window *& window, SDL_Renderer *& renderer, int width, int height) {
	window = nullptr;
	renderer = nullptr;

	bool success = true;

	SDL_Init(SDL_INIT_EVERYTHING);
	
	window = SDL_CreateWindow("Game", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, 0);
	if (window == nullptr) {
		fprintf(stderr, "Window could not be initialized:\n%s\n", SDL_GetError());
		success = false;
	}
	
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	if (renderer == nullptr) {
		fprintf(stderr, "Renderer could not be created:\n%s\n", SDL_GetError());
		success = false;
	}

	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);

	if (!(IMG_Init(IMG_INIT_PNG)) && IMG_INIT_PNG) {
		fprintf(stderr, "Error at IMG_Init:\n%s\n", IMG_GetError());
		success = false;
	}

	return success;
}

SDL_Texture * load_image(const char * path, SDL_Renderer * renderer) {
	SDL_Texture * img = nullptr;
	SDL_Surface * tmpSurf = IMG_Load(path);
	if (tmpSurf == nullptr) {
		fprintf(stderr, "Error loading image:\n%s\n", IMG_GetError());
		return nullptr;
	}

	img = SDL_CreateTextureFromSurface(renderer, tmpSurf);
	if (img == nullptr) {
		printf("Error creating texture:\n%s\n", SDL_GetError());
		return nullptr;
	}

	SDL_FreeSurface (tmpSurf);
	return img;
}
