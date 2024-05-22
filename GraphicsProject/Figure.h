#pragma once
#include "string"
using namespace std;

class Figure
{
public:
	virtual double perimeter() = 0;
	virtual double square() = 0;
	virtual string draw() = 0;
};

