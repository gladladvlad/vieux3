#include "../physics/geometry.h"

namespace vx {


Vector::Vector (double x, double y) {
	this->x = x;
	this->y = y;
}

Vector::Vector (Point origin, Point dest) {
	this->x = dest.getX() - origin.getX();
	this->y = dest.getY() - origin.getY();

 }

double Vector::getX () {
	return this->x;
}

double Vector::getY () {
	return this->y;
}

}