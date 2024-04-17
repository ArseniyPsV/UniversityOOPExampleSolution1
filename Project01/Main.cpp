#include <iostream>
#include "Manager.h"

int main() {
	Student st{ "Alex", 14, 10 };
	
	cout << st.convert() << endl;

	int* pi = new int[10];

	Student* point_st = new Student();

	cout << point_st->convert() << endl;


	delete point_st;

	return 0;
}