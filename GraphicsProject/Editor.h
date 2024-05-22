#pragma once
#include "Figure.h"

class Editor
{
public:
	string justDoIt(Figure* figure) {
		string msg = "";
		msg += figure->draw();
		msg += ": perimeter = " + to_string(figure->perimeter());
		msg += ", square = " + to_string(figure->square());
		return msg;
	}
};