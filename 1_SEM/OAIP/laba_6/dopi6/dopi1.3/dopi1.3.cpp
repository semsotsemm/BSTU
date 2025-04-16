#include <iostream>
#include <cmath>

int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	float h, y, r = 4e-4, j, c = 2.1, m = 0.5;
	for (int i = 0; i < 4; i++)
	{
		cout << "Введите переменную j ";
		cin >> j;
		for (int k = 0; k < 3; k++)
		{
			m = m + 0.5;
			h = (10 * r - j) / (pow(c, 2) + exp(-m));
			y = (h * m - pow(j, 2)) + pow(0.1 * c, 2);
			cout << "Если m = " << m << " ,h = " << h << " ,y= " << y << endl;
		}
	}
}