#include "../graphics/renderer.h"

namespace vx {


Renderer::Renderer () {
	this->window = nullptr;
	this->renderer = nullptr;
}

Renderer::~Renderer () {
	SDL_DestroyRenderer(this->renderer);
	SDL_DestroyWindow(this->window);
}


RetCode Renderer::renderObject (Object & obj) {
	this->copy(obj.getFace());

	return RetCode::Success;
}

RetCode Renderer::clear () {
	// Clear screen
	SDL_RenderClear(this->renderer);

	return RetCode::Success;
}

RetCode Renderer::copy (SDL_Texture * image) {
	// Render texture
	SDL_RenderCopy(this->renderer, image, NULL, NULL);

	return RetCode::Success;
}

RetCode Renderer::present () {
	// Update window
	SDL_RenderPresent(renderer);

	return RetCode::Success;
}

RetCode Renderer::init (int32_t width, int32_t height) {
	RetCode status = Success;

	SDL_Init(SDL_INIT_EVERYTHING);
	
	this->window = SDL_CreateWindow("Game", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, 0);
	if (this->window == nullptr) {
		fprintf(stderr, "Window could not be initialized:\n%s\n", SDL_GetError());
		status = Failure;
	}
	
	this->renderer = SDL_CreateRenderer(this->window, -1, SDL_RENDERER_ACCELERATED);
	if (this->renderer == nullptr) {
		fprintf(stderr, "Renderer could not be created:\n%s\n", SDL_GetError());
		status = Failure;
	}

	SDL_SetRenderDrawColor(this->renderer, 0, 0, 0, 0);

	if (!(IMG_Init(IMG_INIT_PNG)) && IMG_INIT_PNG) {
		fprintf(stderr, "Error at IMG_Init:\n%s\n", IMG_GetError());
		status = Failure;
	}

	return status;
}

SDL_Texture * Renderer::loadImage (const char * path) {
	SDL_Texture * img = nullptr;
	SDL_Surface * tmpSurf = IMG_Load(path);

	if (tmpSurf == nullptr) {
		fprintf(stderr, "Error loading image:\n%s\n", IMG_GetError());
		return nullptr;
	}

	img = SDL_CreateTextureFromSurface(this->renderer, tmpSurf);
	if (img == nullptr) {
		printf("Error creating texture:\n%s\n", SDL_GetError());
		return nullptr;
	}

	SDL_FreeSurface (tmpSurf);
	return img;
}


}