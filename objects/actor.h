#pragma once

#include <SDL.h>

#include "../physics/geometry.h"
#include "../objects/object.h"

#include "../util/retcode.h"

////////////////////////
///// unfinished //////
//////////////////////

namespace vx {


class Actor : public Object {
	public:
	RetCode act ();
	RetCode move (Vector & displacement);

	Actor ();
};


}
