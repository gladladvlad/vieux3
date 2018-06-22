#pragma once

#include <SDL.h>

/////////////////////////
// TODO: finish class //
///////////////////////

class Object {
	public:
	Object (SDL_Texture * newFace);
	SDL_Texture * getFace();

	private:
	SDL_Texture * face;
};
