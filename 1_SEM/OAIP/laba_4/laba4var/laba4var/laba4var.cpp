#include <iomanip>
#include <iostream>

int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int r = 8,t= 16, n = 40, k = 26;
	char c, probel; probel = ' ';
	cout << "Введите символ "; cin >> c;
	for (int i = 0; i < 8; i++)
	{
		cout << setw(n) << setfill(probel) << probel;
		cout << setw(k) << setfill(c) << c << endl;
		n = n - r;
		k = k + t;
		r = r - 1;
		t = r * 2;
	}
	for (int i = 0; i < 2; i++)
	{
		cout << setw(n) << setfill(probel) << probel;
		cout << setw(k) << setfill(c) << c << endl;
	}

}