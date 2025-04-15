#include <iomanip>
#include <iostream>

int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int n = 40, k = 7;
	char c, probel; probel = ' ';
	cout << "Введите символ "; cin >> c;
	for (int i = 0; i < 5; i++)
	{
		cout << setw(n) << setfill(probel) << probel;
		cout << setw(k) << setfill(c) << c << endl;
		n = n - 2;
		k = k + 4;
	}
	n = 42;
	for (int i = 0; i < 8; i++)
	{
		cout << setw(n) << setfill(probel) << probel;
		cout << setw(3) << setfill(c) << c << endl;
	}

}