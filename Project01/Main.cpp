#include "Professor.h"
#include "Student.h"

class A {
public:
	int value1 = 10;

	virtual void start() {
		cout << "start a" << endl;
	}

};

class B : public A {
public:
	int value2 = 20;

	void stop() {
		//int value2 = 10;
		cout << "stop" << endl;
		//cout << value2 << endl;
	}

	void start() override {
		cout << "start b" << endl;
	}
};

int main() {
	A* a = new B();

	cout << a->value1 << endl;
	//cout << a->value2 << endl;

	a->start();
	//a->stop();

	return 0;
}