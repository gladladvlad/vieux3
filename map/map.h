#pragma once

#include <SDL.h>
#include <vector>
#include "../map/tile.h"
#include "../objects/object.h"

//////////////////////
/// unfinised ///////
////////////////////

class Map {
	public:
	const std::vector<Tile *> & operator[] (const unsigned int x);
	bool put (Object & obj, unsigned int x, unsigned int y);

	Map ();
	~Map ();

	private:
	std::vector<std::vector<Tile *>> tiles;
};
