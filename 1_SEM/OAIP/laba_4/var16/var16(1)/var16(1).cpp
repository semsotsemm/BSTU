#include <iomanip>
#include <iostream>

int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int r, n = 40, k = 26;
	char c, probel; probel = ' ';
	cout << "Введите символ "; cin >> c;
	for (int i = 0; i < 11; i++)
	{
		cout << setw(n) << setfill(probel) << probel;
		cout << setw(k) << setfill(c) << c << endl;
		n = n - 3;
		k = k + 6;
	}
}