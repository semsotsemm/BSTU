#include <iomanip>
#include <iostream>

int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int  n = 46, k = 26;
	char c, probel; probel = ' ';
	cout << "Введите символ "; cin >> c;
	for (int i = 0; i < 11; i++)
	{
		cout << setw(n) << setfill(probel) << probel;
		cout << setw(k) << setfill(c) << c << endl;
		n = n - 2;
		k = k + 4;
	}
	for (int i = 0; i < 11; i++)
	{
		cout << setw(n) << setfill(probel) << probel;
		cout << setw(k) << setfill(c) << c << endl;
		n = n + 2;
		k = k - 4;
	}
}