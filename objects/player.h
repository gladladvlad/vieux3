#pragma once

#include "../objects/actor.h"

class Player : public Actor {
	public:
	RetCode & act ();

	private:
	SDL_Event * lastEvent;
};
