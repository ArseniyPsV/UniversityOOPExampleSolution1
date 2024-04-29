#pragma once
#include "Worker.h"

class Professor : public Worker
{
public:
	Professor() {
		cout << "Professor default constructor" << endl;
	}

	~Professor() {
		cout << "Professor destructor" << endl;
	}
};