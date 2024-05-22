#include <iostream>
#include "Editor.h"
#include "Rectangle.h"

using namespace std;

int main() {
	Rectangle* rect = new Rectangle(4, 5);

	Editor editor;

	cout << editor.justDoIt(rect) << endl;

	return 0;
}