#include <iostream>
#include "Manager.h"

void test() {
	Student st1{ "Alex", 14, 10 };
	Student st2{ "Alex", 14, 10 };
	Student st3{ "Alex", 14, 10 };
	Student st4{ "Alex", 14, 10 };

	cout << Student::getCount() << endl;
}

int main() {

	{
		Student st1{ "Alex", 14, 10 };
	}

	Student st2{ "Alex", 14, 10 };
	Student st3{ "Alex" };

	test();
	
	return 0;
}