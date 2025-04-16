#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Rus");
	const int maxsize = 100;
	int size,a[maxsize],n=0;
	srand((unsigned)time(NULL));
	cout << "Ввведите длинну массива (<100) ";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		a[i] = rand() % 10;
		cout << a[i]<<" ";
	}
	cout << endl;
	for (int i = 0; i < size; i++)
	{
			if (a[i]==a[i+1])
			{
				n++;
			}
	}
	cout << "Количество повторяющихся пар: " << n;
}