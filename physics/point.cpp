#include "../physics/geometry.h"

namespace vx {


Point::Point (double x, double y) {
	this->x = x;
	this->y = y;
}

Point::Point (Point & newPoint) {
	this->x = newPoint.getX();
	this->y = newPoint.getY();
}

double Point::getX () {
	return this->x;
}

double Point::getY () {
	return this->y;
}

RetCode Point::move (Vector & vector) {
	this->x += vector.getX();
	this->y += vector.getY();

	return RetCode::Success;
}

}
