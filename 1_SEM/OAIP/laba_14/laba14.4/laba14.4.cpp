#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	const int n = 2, m = 4;
	int B[n][m];
	int i, j, row = 0, column = 0;
	cout << "Введите элементы матрицы" << endl;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			cin >> B[i][j];
	int max = B[0][0];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (max < B[i][j])
			{
				max = B[i][j];
				column = i;
				row = j;
			}
	cout << " Исходный матрица:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "\n";
		for (int j = 0; j < m; j++)
			cout << B[i][j] << "\t";
	}
	cout << endl;
	cout << "Максимальный элемент: " << max << endl<<"Находится на пересечении "<< row+1<<" строки и "<< column+1<<" столбца";
}