#pragma once

#include "../physics/vector.h"

#include "../util/retcode.h"

namespace vx {


class Point {
	public:
	Point (double x, double y);
	Point (Point & newPoint);

	double getX ();
	double getY ();

	RetCode move (Vector & vector);

	private:
	double x, y;
};

}
