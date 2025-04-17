#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	const int n = 2, m = 4;
	int B[n][m];
	int i, j, row = 0, column = 0;
	cout << "Введите элементы массива" << endl;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			cin >> B[i][j];
	int min = B[0][0], min1 = B[0][0], min2 = B[1][0];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if (min > B[i][j])
			{
				min = B[i][j];
				column = i;
				row = j;
			}
			if (min1 > B[i][j] && i==0)
				min1 = *(*(B + i) + j);
			if (min2 > B[i][j] && i==1)
				min2 = *(*(B + i) + j);
		}
	cout << " Исходный массив:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "\n";
		for (int j = 0; j < m; j++)
			cout << "B[" << i << "," << j << "] =" << B[i][j] << "\t";
	}
	cout << endl;
	cout << "Минимальный элемент всего массива B[" << column << "," << row << "] =" << min << endl;
	cout << "Минимальный элемент 1 строки: " << min1 << endl;
	cout << "Минимальный элемент 2 строки: " << min2 ;
}