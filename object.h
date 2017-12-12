#ifndef DCP_OBJECT_HG
#define DCP_OBJECT_HG

#include <SDL2/SDL.h>

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

#endif
