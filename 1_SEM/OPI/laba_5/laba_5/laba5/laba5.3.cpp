#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	char fam;
	cout << "Введите количество букв в имени ";
	cin >> fam;
	int code = fam;
	cout << "Код символа z = " << code;
}