//#include <fstream>
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//	int a, b;
//	char buf[20];
//
//	ifstream fin("Task02.txt");
//
//	if (!fin.fail()) {
//		fin.getline(buf, 20);
//		a = atoi(buf);
//
//		fin.getline(buf, 20);
//		b = atoi(buf);
//
//		cout << a << " + " << b << " = " << (a + b) << endl;
//
//		fin.close();
//	}
//
//	return 0;
//}