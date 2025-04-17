#include <iostream>
using namespace std;

void diag(int number,int **A,int N,int M)
{
	int di;
	cout << "Введите массив" << endl;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
		{
			cout << "Введите элемент массива ";
			cin >> A[i][j];
			if (number == A[i][j] && i == j)
			{
				di = 1;
			}
		}
	for (int i = 0; i < N; i++)
	{
		cout << endl;
		for (int j = 0; j < M; j++)
			cout << A[i][j] << "\t";
	}
	if (di==1)
	cout << endl << "number находится на главной диагонали";
	else
	cout << endl << "number не находится на главной диагонали";
	for (int i = 0; i < M; i++)
		delete A[i];
	delete[] A;

}

void main()
{
    setlocale(LC_CTYPE,"Russian");
    int N, M,number=0,**A;
	cout << "Введите число строк ";
	cin >> N; 
	cout << "Введите чиcло столбцов ";
	cin >> M;
	A = new int* [N];
	for (int i = 0; i < N; i++)
		A[i] = new int[M];
	cout << "Введите число number ";
	cin >> number;
	diag(number,A,N,M);
}