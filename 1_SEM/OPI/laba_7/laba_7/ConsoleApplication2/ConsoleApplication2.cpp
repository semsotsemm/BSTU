#include <iostream>

using namespace std;

int repeat(int size, int a[], int n)
{
	for (int i = 0; i < size; i++)
	{
		if (a[i] == a[i + 1])
		{
			n++;
		}
	}
	return n;
}

void fillarr(int size, int *a)
{
	for (int i = 0; i < size; i++)
	{
		*(a + i) = rand() % 10;
		cout << a[i] << " ";
	}
}

int main()
{
	setlocale(LC_CTYPE, "Rus");

	const int maxsize = 100;
	int size, a[maxsize], n = 0;

	srand((unsigned)time(NULL));

	cout << "Ввведите длинну массива (<100) ";

	cin >> size;
	
	fillarr(size, a); //функция заполняет массив
	n = repeat(size, a, n); //функция считает количество повторений
	cout << endl << "Количество повторяющихся пар: " << n;
}