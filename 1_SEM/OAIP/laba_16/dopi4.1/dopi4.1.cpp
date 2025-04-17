#include <iostream>
using namespace std;

void newmatrix(int** A, int** B,int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			if (i == 0)
				B[i][j] = A[i][j] - A[n - 1][j];
			else
				B[i][j] = A[i][j] - A[i - 1][j];
		}
	cout << endl << "Исходная матрица: ";
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		for (int j = 0; j < n; j++)
			cout << B[i][j] << "\t";
	}
	for (int i = 0; i < n; i++)
	{
		delete A[i];
		delete B[i];
	}
	delete[] A;
	delete[] B;
}

int main()
{
	setlocale(LC_CTYPE,"Russian");
	int n,**A,**B;
	cout << "Введите размер матрицы ";
	cin >> n;
	A = new int* [n];
	B = new int* [n];
	cout << "Введите элементы матрицы "<<endl;
		for (int i = 0; i < n; i++)
		{
			A[i] = new int[n];
			B[i] = new int[n];
			for (int j = 0; j < n; j++)
			{
				cout << "Введите [" << i + 1 << " " << j + 1 << "] элемент матрицы ";
				cin >> A[i][j];
				B[i][j] = 0;
			}
		}
		cout << "Ваша матрица: ";
		for (int i = 0; i < n; i++)
		{
			cout << endl;
			for (int j = 0; j < n; j++)
				cout << A[i][j] << "\t";
		}
		newmatrix(A, B, n);
		return 0;
}