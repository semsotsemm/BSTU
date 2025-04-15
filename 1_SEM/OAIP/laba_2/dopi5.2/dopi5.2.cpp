#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool checkInt(char* number)
{
	for (int i = 0; i < sizeof(number); i++)
	{
		if (number[i] == '.' || number[i] == ',')
		{
			return false;
		}
	}
	return true;
}

bool getInt(string line, char* number)
{
	int j = 0;
	for (int i = 0; i < line.length(); i++)
	{
		if ((line[i] >= '0' && line[i] <= '9') || line[i] == '.' || line[i] == ',')
		{
			while ((line[i] >= '0' && line[i] <= '9') || line[i] == '.' || line[i] == ',')
			{
				number[j] = line[i];
				i++;
				j++;
			}
			if (checkInt(number))
			{
				number[j] = '\0';
				return true;
			}
			else
			{
				j = 0;
				for (int i = 0; i < sizeof(number); i++)
				{
					number[i] = '\0';
				}
			}
		}
	}
	return false;
}

int main()
{
	ofstream fin("FILE1.txt");
	string line;
	char number[20];
	setlocale(LC_CTYPE, "Russian");
	cout << "Введите строку: ";
	getline(cin, line);
	fin << line;
	fin.close();
	ifstream fout("FILE1.txt");
	fout >> line;
	fout.close();
	if (getInt(line, number))
	{
		cout << "Целое число в строке: " << number << endl;
	}
	else
	{
		cout << "В строке нет целого числа\n";
	}
	return 0;
}