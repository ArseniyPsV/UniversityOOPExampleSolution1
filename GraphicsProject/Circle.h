#pragma once
#include "Figure.h"

class Circle : public Figure

{
private:
	double radius;
public:
	Circle() : Figure(), radius(1) {}
	Circle(double radius, int x, int y) 
		: Figure(x,y), radius(radius) {}

	double getRadius();
	void setRadius(double radius);

	double perimeter() override;
	double square() override;
	string draw() override;
};