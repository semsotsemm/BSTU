#include <iostream>
#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	const int maxSize = 30;
	int n, i, kmax = 0,kmin=101;
	int a[maxSize];
	cout << "Введите размер массива (<30)" << endl;
	cin >> n;
	if (n > 30) return 0;
	srand((unsigned)time(NULL));
	for ( i = 0; i < n; i++)
	{
		a[i] = rand() % 30;
		cout << a[i] << " ";
	}
	cout << endl;
	for (i = 1; i < n; i++)
		if (a[i] > a[kmax]) kmax = i;
	cout << "Максимальный элемент: " << a[kmax] << endl;
	for (i = 1; i < n; i++)
		if (a[i] < a[kmin]) kmax = i;
	cout << "Минимальный элемент: " << a[kmax] << endl;
}