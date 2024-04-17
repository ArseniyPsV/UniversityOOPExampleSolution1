#pragma once
#include "Student.h"

class Group
{
private:
	static const int DEFAULT_SIZE = 30;
	Student list[DEFAULT_SIZE];
	int size;

public:
	Group() : size(0) {}

	bool add(Student st);

	int getSize();
	Student get(int index);

	string convertToString();
};

