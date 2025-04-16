#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int A,mask1=248,mask2; char tmp[33];
	mask2 = ~mask1;
	cout << "Введите число ";
	cin >> A;
	_itoa_s(A, tmp, 2);
	cout << "Число в двоичном виде = " << tmp << endl;
	_itoa_s(A>>3 & mask1, tmp, 2);
	cout << "Выделенные биты А:" << tmp << endl;
	_itoa_s(A & mask2, tmp, 2);
	cout << "Очищенные биты в переменной А:" << tmp << endl;
	_itoa_s((~A & mask1)|(A & mask2), tmp, 2);
	cout << "Итоговое число A: " << tmp;
}