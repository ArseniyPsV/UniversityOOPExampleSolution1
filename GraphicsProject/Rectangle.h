#pragma once
#include "Figure.h"

class Rectangle : public Figure
{
public:
	double a;
	double b;

	Rectangle() : a(1), b(1) {}
	Rectangle(int a, int b) : a(a), b(b) {}

	double perimeter() override;
	double square() override;
	string draw() override;
};