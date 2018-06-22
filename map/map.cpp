#include "../map/map.h"

const std::vector<Tile *> & Map::operator[] (const unsigned int x) {
	return this->tiles[x];
}