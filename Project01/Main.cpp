#include <iostream>
#include "Manager.h"

int main() {

	Group groupA;
	
	Student st1{ "Alex", 14, 10 };
	Student st2{ "Peter", 16, 9 };
	Student st3{ "Alice", 6, 4 };

	groupA.add(st1);
	groupA.add(st2);
	groupA.add(st3);

	cout << groupA.convertToString() << endl;

	return 0;
}