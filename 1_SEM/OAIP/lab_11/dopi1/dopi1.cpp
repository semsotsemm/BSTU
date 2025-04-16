#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int A,maskA=8188,n=0; char tmp[33];
	cout << "Введите число ";
	cin >> A;
	_itoa_s(A, tmp, 2);
	cout << "Число в двоичном виде = " << tmp << endl;
	_itoa_s((A & maskA)>>2, tmp, 2);
	for (int i = 0; i < 11; i++)
	{
		if (tmp[i]=='0')
		{
			n++;
		}
	}
	cout << "Количество 0 начиная с третьего бита по 13, включая эти биты = " << n;
}