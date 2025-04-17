#include <iostream>

int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	const int n=2;
	int A[2*n][2*n],k;
	srand((unsigned)time(NULL));
	cout << "Матрица: ";
	for (int i = 0; i < 2*n; i++)
	{
		cout << "\n";
		for (int j = 0; j < 2*n; j++)
		{
			A[i][j] = -10 + rand() %21;
			cout << A[i][j]<<"\t";
		}
	}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			k = A[i][j];
			A[i][j] = A[i+n][j+n];
			A[i + n][j + n] = k;
			k = A[i][j + n];
			A[i][j + n] = A[i + n][j];
			A[i + n][j] = k;
		}
	cout <<endl<< "Исходная матрица: ";
	for (int i = 0; i < 2 * n; i++)
	{
		cout << "\n";
		for (int j = 0; j < 2 * n; j++)
			cout << A[i][j] << "\t";
	}
}