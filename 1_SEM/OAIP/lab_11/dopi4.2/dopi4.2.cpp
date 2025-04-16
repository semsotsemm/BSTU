#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE,"Russian");
	int A, n, p,maskA;
	char tmp[33];
	cout << "Введите число A "; cin >> A;
	_itoa_s(A, tmp, 2);
	cout << "A=" << tmp << endl;
	cout << "Введите сколько битов хотите заменить единицами n "; cin >> n;
	cout << "Введите из какой позиции хотите изменить биты "; cin >> p;
	maskA = pow(2, n) - 1; maskA *= pow(2, p);
	_itoa_s(maskA, tmp, 2);
	cout << "maskA=" << tmp << endl;
	_itoa_s(A|maskA, tmp, 2);
	cout << "Число А в двоичной c/c =" << tmp << "," << endl;
	_itoa_s(A | maskA, tmp, 10);
	cout << "Число А в десятичной c/c =" << tmp<< endl;
}