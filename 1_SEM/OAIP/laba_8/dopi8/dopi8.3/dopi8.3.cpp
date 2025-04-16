#include <iostream>

int main()
{
	int x = 1, i = 1, imin = 1;
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	cout << "Введите значения переменной x, закончите ввод цифрой 0 " << endl;
	while (x != 0)
	{
		cout << "х" << i << " = ";
		cin >> x;
		if (x < 0)
		{
			imin = i;
		}
		i++;
	}
	cout << "Порядковый номер последнего отрицательного элемента = " << imin;
}