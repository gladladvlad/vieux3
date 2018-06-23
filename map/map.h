#pragma once

#include <SDL.h>
#include <vector>

#include "../map/tile.h"
#include "../objects/object.h"

#include "../util/retcode.h"

//////////////////////
/// unfinised ///////
////////////////////

namespace vx {


class Map {
	public:
	const std::vector<Tile *> & operator[] (const unsigned int x);
	RetCode put (Object & obj, unsigned int x, unsigned int y);

	Map ();
	~Map ();

	private:
	std::vector<std::vector<Tile *>> tiles;
};


}
