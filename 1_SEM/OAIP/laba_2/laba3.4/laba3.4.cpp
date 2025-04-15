#include <stdio.h>  
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int k;
	//FILE* fin;
	//fopen_s(&fin, "name1.txt", "r");
	string s;
	ifstream fin("name1.txt");
	ofstream fout1("name2.txt");
	ofstream fout2("name3.txt");
	printf("Введите число k\n");
	scanf_s("%d", &k);
	while (getline(fin, s))
	{
	//	char s[255] = "";
	//	fgets(s, 254, fin); // получаем в перемнную s строку из fin
		if (s.length() <= k)
			fout1 << s;
		else
		{
			for (int i = s.length() - k - 1; i < s.length(); i++)
				fout1 << s[i];
		}
		if (s.length() < k)
			fout2 << " " << endl;
		else
			fout2 << s[k - 1] << endl;
	}
	fin.close();
	fout1.close();
	fout2.close();
	cout << "Файлы созданы ";
	return 0;
}
