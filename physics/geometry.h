#pragma once

#include "../util/retcode.h"

namespace vx {

class Point;
class Vector;


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
