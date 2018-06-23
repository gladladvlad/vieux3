#pragma once

#include <SDL.h>

#include "../physics/geometry.h"

#include "../util/retcode.h"

/////////////////////////
// TODO: finish class //
///////////////////////

namespace vx {


class Object {
	public:
	Object ();
	Object (Point & where);
	~Object ();

	SDL_Texture * getFace ();
	RetCode setFace (SDL_Texture * newFace);

	Point * getPosition ();

	protected:
	SDL_Texture * face;
	Point * position;
};


}
