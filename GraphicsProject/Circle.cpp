#include "Circle.h"
#include <math.h>

const double PI = 3.1416;

double Circle::perimeter() {
	return 2 * PI * radius;
}

double Circle::square() {
	return PI * radius * radius;
}

string Circle::draw() {
	return "Circle: " + Figure::draw()
		+ "; radius = " + to_string(radius) + ".";
}

double Circle::getRadius() {
	return radius;
}

void Circle::setRadius(double radius) {
	if (radius > 0) {
		this->radius = radius;
	}
}