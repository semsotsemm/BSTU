#include <iostream>
#include <Windows.h>
#include<string>
using namespace std;

void main()
{
	setlocale(LC_CTYPE,"Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int repeat=0;
	string a,bstu="БГТУ";
	cout << "Введите строку "<<endl;
	getline(cin,a);
	for (int i = 0; i < size(a); i++)
	{
		for (int j = 0; j < size(bstu); j++)
		{
			if (a[i]==bstu[j])
			{
				i++;
				repeat++;
			}
			else
				break;
		}
		if (repeat == size(bstu))
		{
			cout << "В данной строке есть слово БГТУ";
			return;
		}
	}
	cout << "В данной строке нет слова БГТУ";
}