#pragma once

#include <SDL.h>

#include "../util/retcode.h"

#include "../objects/object.h"

////////////////////////
///// unfinished //////
//////////////////////

class Actor : public Object {
	public:
	SDL_Texture * face;
	RetCode & act ();
};
