#include "../objects/object.h"

namespace vx {



Object::Object () {
	this->position = new Point (0.0L, 0.0L);
}

Object::Object (Point & where) : position(new Point(where)) {

}

Object::~Object () {
	delete this->position;
	SDL_DestroyTexture(this->face);
}

SDL_Texture * Object::getFace () {
	return this->face;
}

RetCode Object::setFace (SDL_Texture * newFace) {
	this->face = newFace;
	return RetCode::Success;
}

Point * Object::getPosition () {
	return this->position;
}


}
