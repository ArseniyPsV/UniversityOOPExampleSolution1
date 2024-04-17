#pragma once
#include <string>
using namespace std;

class Student {
private:
	string name;
	int age;
	double mark;

public:	

	Student();
	Student(string, int, double);
	
	~Student();

	string getName();
	
	int getAge();
	void setAge(int);

	double getMark();
	void setMark(double);

	string convert();
};
