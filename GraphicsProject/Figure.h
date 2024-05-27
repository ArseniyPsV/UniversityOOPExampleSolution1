#pragma once
#include "string"
using namespace std;

class Figure
{
protected:
	int x;
	int y;
public:
	Figure() : x(0), y(0) {}
	Figure(int x, int y) : x(x), y(y) {}

	int getX();
	int getY();
	void getX(int x);
	void getY(int y);

	virtual double perimeter() = 0;
	virtual double square() = 0;
	virtual string draw();
};

