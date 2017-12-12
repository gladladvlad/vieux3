#include "object.h"

Object::Object (SDL_Texture * newFace) {
   face = newFace;
}

SDL_Texture * Object::getFace() {
	return face;
}
