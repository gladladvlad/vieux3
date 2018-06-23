#include "../map/map.h"

namespace vx {


const std::vector<Tile *> & Map::operator[] (const unsigned int x) {
	return this->tiles[x];
}


}