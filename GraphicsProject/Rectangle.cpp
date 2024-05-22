#include "Rectangle.h"

double Rectangle::perimeter() {
	return (a + b) * 2;
}

double Rectangle::square() {
	return a * b;
}

string Rectangle::draw() {
	return "Rectangle";
}