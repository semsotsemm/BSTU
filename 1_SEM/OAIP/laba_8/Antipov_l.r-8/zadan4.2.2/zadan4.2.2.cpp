#include <iostream>

int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	double	t=1000, y[5], q = 1;
	cout << "Введите 4 значений переменной 5 " << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> y[i];
		if (t>y[i])
		{
			t = y[i];
		}
	}
	for (int i = 0; i < 5; i++)
	{
		q *= (y[i] + t);
	}
	cout <<"q = "<< q;
}