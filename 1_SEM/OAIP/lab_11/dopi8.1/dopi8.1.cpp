#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int A, n = 0, n1 = 1;
	char tmp[33];
	cout << "Введите число А "; cin >> A;
	for (int i = 0; A >= n1; i++)
	{
		n += 4 * pow(8, i);
		n1 = 4 * pow(8, i + 1);
	}
	_itoa_s(A, tmp, 2);
	cout << " Число А: " << tmp << endl;
	_itoa_s(~n, tmp, 2);
	cout << " Маска для А: " << tmp << endl;
	_itoa_s(A & ~n, tmp, 2);
	cout << " Результат: " << tmp << endl << endl;
}