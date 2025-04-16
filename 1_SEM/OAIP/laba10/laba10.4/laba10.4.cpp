#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE,"rus");
	const int maxsize = 100;
	int size, a[maxsize], el;
	srand((unsigned)time(NULL));
	cout << "Введите размер массива (<100) "; cin >> size;
	cout << "Ваш массив (перед каждым четным элеметном 1): ";
	for (int i = 0; i < size; i++)
	{
		a[i] = rand() % 99 +2;
		if (a[i] % 2 == 0)
		{
			a[i+1] = a[i];
			a[i] = 1;
			size++;
			i++;
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "Введите какие элементы хотите удалить "; cin >> el;
	for (int i = 0; i < size; i++)
	{
		if (a[i] == el)
		{
			size--;
			int j = i;
			for (; j < size; j++)
			{
				a[i] = a[i++];
				cout << a[i] << " ";
			}
			i++;
		}
		if (i < size)
		{
			cout << a[i] << " ";
		}
	}
}