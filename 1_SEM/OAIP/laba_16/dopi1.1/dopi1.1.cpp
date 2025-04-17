#include <iostream>
using namespace std;

void swap(int **A,int m,int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if ((i+1)%2!=0 && A[i][j]<0)
				A[i][j] = -A[i][j];
	for (int i = 0; i < m; i++)
	{
		cout << endl;
		for (int j = 0; j < n; j++)
			cout << A[i][j] << "\t";
	}
	for (int i = 0; i < n ; i++)
		delete A[i];
	delete[] A;
}

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int n, m, ** A;
	cout << "Введите количество строк матрицы ";
	cin >> m;
	cout << "Введите количество столбцов матрицы ";
	cin >> n;
	A = new int* [m];
	cout << "Введите элементы матрицы \n";
	for (int i = 0; i < m; i++)
	{
		A[i] = new int[n];
		for (int j = 0; j < n; j++)
		{
			cout << "Введите [" << i + 1 << " " << j + 1 << "] элемент ";
			cin >> A[i][j];
		}
	}
	swap(A,m,n);
}