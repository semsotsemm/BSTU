#include <iostream>

int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	double	y, x[5], z = 0,sigma=0;
	cout << "Введите 5 значений переменной x" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin>> x[i];
		if (z<x[i])
		{
			z = x[i];
		}
		sigma += x[i] * x[i];
	}
	y = sigma * z;
	cout << "y = " << y;
}