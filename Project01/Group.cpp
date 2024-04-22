#include "Group.h"

void Group::add(Student st) {
	if (size == 0) {
		list = new Student[1];
		*list = st;
	}
	else {
		Student* temp = new Student[size + 1];
	
		for (int i = 0; i < size; i++)
		{
			temp[i] = list[i];
		}

		temp[size] = st;

		delete[] list;
		list = temp;
	}

	size++;
}

void Group::remove(int index) {
	if (size > 0 && index >= 0 && index < size) {
		Student* temp = new Student[size - 1];
		
		for (int i = 0, j = 0; i < size; i++)
		{
			if (i != 0) {
				temp[j] = list[i];
				j++;
			}
		}
	}
}

void Group::remove(Student student) {

}

int Group::getSize() {
	return size;
}

Student Group::get(int index) {
	if (index >= 0 && index < size) {
		return list[index];
	}

	return Student();
}

string Group::convertToString() {
	string s = "Group of students:\n";

	for (int i = 0; i < size; i++)
	{
		s += list[i].convert() + "\n";
	}

	return s;
}
