#pragma once
#include <iostream>
#include <string>
using namespace std;

class Human
{
private:
	string name;
	int age;

public:
	Human() {
		cout << "Human default constructor" << endl;
	}

	Human(string name, int age, double salary) :
		name(name), age(age) {}

	~Human() {
		cout << "Human destructor" << endl;
	}

	string getName();
	void setName(string name);
	int getAge();
	void setAge(int age);

	string getInfo();
};

