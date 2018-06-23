#include "../objects/player.h"

namespace vx {


Player::Player () {

}

RetCode Player::setEvent (SDL_Event * newEvent) {
	this->lastEvent = newEvent;
	return RetCode::Success;
}

SDL_Event * Player::getEvent () {
	return this->lastEvent;
}

RetCode Player::act () {
	if (this->lastEvent->type == SDL_KEYDOWN) {
		switch (this->lastEvent->key.keysym.sym) {
		case SDLK_w:
			this->move(*(new Vector(0.0L, 1.0L))); // very un-nice. change soon
			break;
		case SDLK_s:
			this->move(*(new Vector(0.0L, -1.0L))); // very un-nice. change soon
			break;

		default:
			break;
		}
	}

	return RetCode::Success;
}


}
