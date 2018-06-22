#pragma once

#include <SDL.h>

/////////////////////////
// TODO: finish class //
///////////////////////

class Object {
	private:
		SDL_Texture * face;
		long long volume, weight;
	public:
		Object (SDL_Texture * newFace);
		SDL_Texture * getFace();
};
