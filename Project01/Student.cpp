#include "Student.h"


// default constructor (конструктор по умолчанию)
Student::Student() : Student("no_name", 6, 4) {
	//cout << "default constructor was calling" << endl;
	/*name = "no name";
	age = 6;
	mark = 4;*/
}

//Student(string nm) {
//	//cout << "constructor with arguments was calling" << endl;
//	name = nm;
//}

//Student(string name, int age) {
//	//cout << "constructor with arguments was calling" << endl;
//	this->name = name;
//	this->age = age;
//}

// canonical constructor (канонический конструктор)
Student::Student(string name, int age, double mark) 
	: name(name), age(age), mark(mark) {
	//cout << "canonical constructor with arguments was calling" << endl;	
}

//// copy-constructor (конструктор копирования)
//Student(const Student& student) {

//}

// destructor
Student::~Student() {
	//cout << "destructor was calling" << endl;
	// ...
}

string Student::getName() {
	return name;
}

/*void setName(string nm) {
	name = nm;
}*/

int Student::getAge() {
	return age;
}

void Student::setAge(int age) {
	if (age > 0 && age < 100) {
		this->age = age;
	}
}

double Student::getMark() {
	return mark;
}

void Student::setMark(double mark) {
	if (mark >= 0 && mark <= 10) {
		this->mark = mark;
	}
}

string Student::convert() {
	string s = "";
	s += name;
	s += ": age = " + to_string(age);
	s += ", mark = " + to_string(mark);

	return s;
}