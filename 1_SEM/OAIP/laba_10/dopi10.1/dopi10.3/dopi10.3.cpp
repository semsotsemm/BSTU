#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Rus");
	const int maxsize = 100;
	int size, a[maxsize],n=1,r=2,sum1=0;
	srand((unsigned)time(NULL));
	cout << "Ввведите длинну массива (<100) ";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		a[i] = rand() % 2;
		cout << a[i] << " ";
	}
	for (int i = 0; i < size - 1; i++)
	{
		if (a[i]==a[i+1])
		{
			n += 1;
		}
		else
		{
			n = 1;
		}
		if (n>sum1)
		{
			sum1 = n;
		}
	}
	cout <<endl<< sum1;

}