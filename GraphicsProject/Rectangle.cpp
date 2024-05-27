#include "Rectangle.h"

double Rectangle::perimeter() {
	return (a + b) * 2;
}

double Rectangle::square() {
	return a * b;
}

string Rectangle::draw() {
	return "Rectangle: " + Figure::draw()
		+ "; a = " + to_string(a)
		+ " a = " + to_string(b) + ".";
}

double Rectangle::getA() {
	return a;
}

double Rectangle::getB() {
	return b;
}

void Rectangle::setA(double a) {
	if (a > 0) {
		this->a = a;
	}
}

void Rectangle::setB(double b) {
	if (b > 0) {
		this->b = b;
	}
}