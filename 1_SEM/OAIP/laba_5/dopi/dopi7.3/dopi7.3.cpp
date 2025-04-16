#include <iostream>

int main()
{
	int a, b, p, q, r, s,n;
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	cout << "Введите размер участка axb" << endl;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "Введите размер первого дома pxq" << endl;
	cout << "p = "; cin >> p;
	cout << "q = "; cin >> q;
	cout << "Введите размер первого дома rxs" << endl;
	cout << "r = "; cin >> r;
	cout << "s = "; cin >> s;
	n = r * s + p * q;
	if (a * b < n)
	{
		cout << "Дома не возможно разместить";
	}
	else 
	{
		cout << "Дома можно разместить";
	}
}