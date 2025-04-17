#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	const int n = 2, m = 4;
	int A[n][m],k=0,b=1,i, j,zero=0;
	cout << "Введите элементы матрицы" << endl;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			cin >> *(*(A + i) + j);
	cout << "Введите число k "; cin >> k;
	cout << " Исходный матрица:";
	for (int i = 0; i < n; i++)
	{
		cout << "\n";
		for (int j = 0; j < m; j++)
		{
			cout << *(*(A + i) + j) << "\t";
			if (*(*(A + i) + j) ==0&&j==k-1)
				zero++;
		}
	}
	if (zero == n)
		b = 0;
	cout <<endl<< "b = " << b;
	return 0;
}