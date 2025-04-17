#include <iostream>

int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int n,maxA=0,num= 0;
	cout << "Введите размер массива: ";
	cin >> n;
	int* max = new int[n];
	int** A = new int* [n];
	for (int i = 0; i < n; i++)
	{
		A[i] = new int[n];
	}
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand() % 100;
			cout << A[i][j]<<"\t";
		}
		max[i] = 1000;
		cout << endl;
	}
	for (int k = 0; k < n; k++)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (k==0&& A[i][j] > num)
				{
					num = A[i][j];
				}
				else if (A[i][j] > num && A[i][j]<max[k-1])
				{
					num = A[i][j];
				}
			}
		}
		max[k] = num;
		maxA = num;
		num = 0;
	}
	cout << "Исходная матрица:\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) 
		{
			if (i == j)
			{
				int r = A[i][j];
				for (int b = 0; b < n; b++)
				{
					for (int c = 0; c < n; c++)
					{
						if (A[b][c]==max[i])
						{
							A[b][c] = r;
						}
					}
				}
				A[i][j] = max[i];
			}
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}
}