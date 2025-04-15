#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void copyLines() 
{
	string line;
	int numberOfSpaces = 0;
	ofstream inputf("FILE2.txt");
	ifstream outputf("FILE1.txt");
	while (getline(outputf, line))
	{
		for (int i = 0; i < line.length(); i++)
		{
			if (line[i] == ' ')
			{
				numberOfSpaces++;
			}
		}
		if (numberOfSpaces == 0)
		{
			inputf << line << '\n';
		}
		numberOfSpaces = 0;
	}
	inputf.close();
	outputf.close();
}

void findWord() 
{
	ifstream outputf("FILE2.txt");
	string line;
	cout << "Слова из 5 букв в файле FILE2.txt: ";
	bool getWord = false;
	while (getline(outputf, line))
	{
		if (line.length() == 5)
		{
			cout << line << " ";
			getWord = true;
		}
	}
	if (!getWord)	
	{
		cout << "Слов состаяющих из 5 букв не найдено";
	}
	cout << endl;
	outputf.close();
}

int main()
{
	setlocale(LC_CTYPE,"Russian");
	copyLines();
	findWord();
}