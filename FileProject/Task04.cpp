//#include <fstream>
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//	string result = "";
//	int digit;
//	int sum = 0;
//
//	ifstream fin("input.txt");
//
//	if (!fin.fail()) {
//		
//		while (!fin.eof()) {
//			fin >> digit;
//			sum += digit;
//			result = to_string(digit) + " " + result;
//		}
//	
//		fin.close();
//	}
//
//	cout << "Sum: " << sum << endl;
//
//	ofstream fout("output.txt");
//	if (!fout.fail()) {
//		fout << result;
//		fout.close();
//	}
//
//	return 0;
//}