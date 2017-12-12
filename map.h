#ifndef DCP_GRID_HG
#define DCP_GRID_HG

#include <SDL2/SDL.h>
#include <vector>
#include "tile.h"
#include "object.h"

class Map {
	private:
		std::vector<std::vector<Tile *>> tiles; // TODO: make data a vector of vectors of lists
	public:
		Map ();
		~Map ();
		const std::vector<Tile *> & operator[] (const unsigned int x) { return tiles[x]; }
		bool put (Object & obj, unsigned int x, unsigned int y);
};

#endif
