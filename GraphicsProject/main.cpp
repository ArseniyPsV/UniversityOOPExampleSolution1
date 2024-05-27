#include <iostream>
#include "Editor.h"
#include "Rectangle.h"
#include "Circle.h"

using namespace std;

int main() {
	Rectangle* rect = new Rectangle(4, 5, 1, 1);
	Circle* circle = new Circle(5, 3, 4);
	 
	Editor editor;

	cout << editor.justDoIt(rect) << endl;
	cout << editor.justDoIt(circle) << endl;

	return 0;
}