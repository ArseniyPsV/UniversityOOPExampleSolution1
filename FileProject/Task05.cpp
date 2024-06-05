#include <fstream>
#include <iostream>
#include <string>

using namespace std;

class Symbol {
public:
	char letter;
	int count;
};

int main() {
	string alfabet = "qwertyuiopasdfghjklzxcvbnm";
	Symbol* symbols = new Symbol[alfabet.length()];

	for (int i = 0; i < alfabet.length(); i++)
	{
		symbols[i].count = 0;
		symbols[i].letter = alfabet[i];
	}

	ifstream fin("input.txt");
	string buf = "";

	if (!fin.fail()) {

		while (!fin.eof()) {
			getline(fin, buf);

			for (int i = 0; i < buf.length(); i++)
			{
				for (int j = 0; j < alfabet.length(); j++)
				{
					if (buf[i] >= 'A' && buf[i] <= 'z' && tolower(buf[i]) == alfabet[j]) {
						symbols[j].count++;
						break;
					}
				}
			}
		}

		fin.close();
	}

	for (int i = 0; i < alfabet.length(); i++)
	{
		for (int j = 0; j < alfabet.length() - 1 - i; j++)
		{
			if (symbols[j].count < symbols[j + 1].count) {
				swap(symbols[j], symbols[j + 1]);
			}
		}
	}

	ofstream fout("output.txt");
	if (!fout.fail()) {

		for (int i = 0; i < alfabet.length(); i++)
		{
			fout << symbols[i].letter << " - " << symbols[i].count << endl;
		}

		fout.close();
	}

	return 0;
}