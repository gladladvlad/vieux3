#pragma once

#include "../objects/actor.h"

#include "../util/retcode.h"

namespace vx {


class Player : public Actor {
	public:
	Player ();

	RetCode setEvent (SDL_Event * newEvent);
	SDL_Event * getEvent ();
	RetCode act ();

	protected:
	SDL_Event * lastEvent;
};


}
