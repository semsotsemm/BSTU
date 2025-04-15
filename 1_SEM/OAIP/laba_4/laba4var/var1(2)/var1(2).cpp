#include <iostream>

int main()
{
	double d,s;
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	cout << "Введите длинну диагонали квадрата";
	cin >> d;
	s = d * d / 2;
	cout << "Площадь квадрата = " << s;
}