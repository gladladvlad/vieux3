#pragma once

#include "../physics/point.h"

namespace vx {


class Vector {
	public:
	Vector (double x, double y);
	Vector (Point origin, Point dest);
	double getX ();
	double getY ();

	private:
	double x, y;
};


}
