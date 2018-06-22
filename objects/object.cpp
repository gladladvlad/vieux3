#include "../objects/object.h"

Object::Object (SDL_Texture * newFace) {
   this->face = newFace;
}

SDL_Texture * Object::getFace() {
	return this->face;
}
