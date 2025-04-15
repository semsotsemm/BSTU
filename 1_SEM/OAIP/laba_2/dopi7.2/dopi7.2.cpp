#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	setlocale(LC_CTYPE,"Russian");
	string line;
	int numberOfSymbol, numberOfWord = 0;
	cout << "Введите строку: ";
	getline(cin, line);
	ofstream inputf("FILE1.txt");
	inputf << line;
	inputf.close();
	ifstream outputf("FILE1.txt");
	line = "fdflk";
	getline(outputf, line);
	outputf.close();
	cout << "Введите номер символа: ";
	cin >> numberOfSymbol;
	for (int i = 0; i < numberOfSymbol; i++)
	{
		if (line[i] == ' ')
		{
			numberOfWord++;
		}
	}
	cout << "Количество слов до символа под номером " << numberOfSymbol << ": " << numberOfWord<< "\n";
	return 0;
}