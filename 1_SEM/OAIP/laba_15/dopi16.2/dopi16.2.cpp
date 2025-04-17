#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int strok, colum, **A, num;
	cout << "Введите количество строк матрицы ";
	cin >> strok;
	cout << "Введите количество столбцов матрицы ";
	cin >> colum;
	A = new int* [strok];
	cout << "Введите элементы матрицы \n";
	for (int i = 0; i < strok; i++)
	{
		A[i] = new int[colum];
		for (int j = 0; j < colum; j++)
			cin >> A[i][j];
	}
	for (int i = 0; i < strok; i++)
	{
		for (int j = 0; j < colum; j++)
			if (A[i][j] == 0) 
			{
				num = j;
				break;
			}
	}
	cout << "Ваш массив: ";
	for (int i = 0; i < strok; i++)
	{
		cout << endl;
		for (int j = 0; j < colum; j++)
			cout << A[i][j] << "\t";
	}
	cout << "\n Номер столбца хоть 1 элемент которого равен 0: " << num+1;
	for (int k = 0; k < strok; k++)
		delete[] A[k];
	delete[] A;
}