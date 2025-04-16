#include <iostream>

int main()
{
	int n,n1=0;
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	cout << "Введите размер массива n "; cin >> n;
	int * a = new int [n];
	cout << "Ваш массив : ";
	for (int i = 0; i < n+1; i++)
	{
		a[i] = rand() % 100;;
		a[i] = a[i] - 50;
	}
	a[n - 1] = 0;
	for (int i = 0; i <n; i++)
	{
		cout << a[i] << " ";
		if (a[i]*a[i+1] < 0)
		{
			n1++;
		}
	}
	cout << endl;
	cout << "В данной последовательности знак изменится " << n1 <<" раз";
	}
