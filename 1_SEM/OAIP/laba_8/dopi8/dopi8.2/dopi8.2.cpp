#include <iostream>

int main()
{
	int i = 1, xmin=0,imin,xmax=0,imax,result;
	double x = 1;
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	cout << "Введите значения переменной x, закончите ввод цифрой 0 " << endl;
	while (x != 0)
	{
		cout << "х" << i << " = ";
		cin >> x;
		if (x > xmin)
		{
			xmin = x;
			imin = i;
		}
		if (x < xmax)
		{
			xmax = x;
			imax = i;
		}
		i++;
	}
	result = abs(imin - imax);
	cout << "Количество элеметнов между максимальным и минимальным: " <<result-1;
}