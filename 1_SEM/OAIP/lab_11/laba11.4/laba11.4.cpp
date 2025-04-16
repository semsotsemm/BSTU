#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	char tmp[33];
	int A, B, maskA = 14;
	int maskB = ~maskA >> 1;
	//maskB= ~01110>>1=10001>>1=1000
	cout << "Первое число А="; cin >> A;
	cout << "Второе число В="; cin >> B;
	_itoa_s(A, tmp, 2);
	//Сохраняет в переменную tmp значение переменной A в двоичн.с/c
	cout << "A=" << tmp << endl;
	_itoa_s(B, tmp, 2);
	cout << "B=" << tmp << endl;
	_itoa_s(maskA, tmp, 2);
	cout << "Маска для А: " << tmp << endl;
	_itoa_s((A & maskA) >> 1, tmp, 2);
	/*Сохраняет в переменную tmp 2, 3, 4 биты переменной A в двоичн.с/c
	1100100
	0001110*/
	cout << "Выделенные биты А: " << tmp << endl;
	_itoa_s(maskB, tmp, 2);
	cout << "Маска для В: " << tmp << endl;
	_itoa_s(B & maskB, tmp, 2);
	/*Сохраняет в переменную tmp все биты переменной B в двоичн.с/c кроме 1,2,3
	1111111000
	1000101010*/
	cout << " Очищены биты в B: " << tmp << endl;
	_itoa_s(((B & maskB) | ((A & maskA) >> 1)), tmp, 2);
	/*B & maskB = 1000101000
	  A & maskA = 0000000010
	  (B & maskB) | ((A & maskA) = 1000101010
	  10001010>>1=10001010
	*/
	cout << " Результат B=" << tmp << endl;
}