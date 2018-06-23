#pragma once

#include <SDL.h>
#include <SDL_image.h>
#include <cstdio>

#include "../objects/object.h"

#include "../util/retcode.h"

namespace vx {


class Renderer {
	public:
	Renderer ();
	~Renderer ();

	RetCode init (int32_t width, int32_t height);
	SDL_Texture * loadImage (const char * path);

	RetCode renderObject (Object * obj);
	RetCode clear ();
	RetCode copy (SDL_Texture * image, const SDL_Rect * srcRect, const SDL_Rect * dstRect);
	RetCode present ();

	//private:
	SDL_Window * window;
	SDL_Renderer * renderer;
};


}
