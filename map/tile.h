#pragma once

#include "../objects/object.h"

#include "../util/ints.h"

//////////////////////////
///// unfinished ////////
////////////////////////

namespace vx {


//// not sure about this design. might do away with Tile :csf:
class Tile : public Object {
	public:
	Tile ();

	protected:
	int64_t volumeAccept, weightAccept;
};


}
