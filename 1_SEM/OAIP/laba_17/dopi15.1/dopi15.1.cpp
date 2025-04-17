#include <iostream>
using namespace std;

int otr (int size, int *A, int min, int mini,int col)
{
	for (int i = 0; i < size; i++)
	{
		if (A[i] < min)
		{
			min = A[i];
			mini = i + 1;
		}
		if (i == 0) 
		{
			min = A[i];
			mini = i + 1;
		}
	}
	for (int i = mini; i < size; i++)
		if (A[i] < 0)
			col++;
	return col;
}

int main()
{
	setlocale(LC_CTYPE,"Russian");
	int size, min=0,mini=0,col=0;
	cout << "Введите количество элементов массива: ";
	cin >> size;
	int* A = new int[size];
	cout << "Введите массив: \n";
	for (int i = 0; i < size; i++)
	{
		cout << "Введите " << i + 1 << " элемент массива ";
		cin >> A[i];
	}
	col = otr(size, A, min, mini, col);
	cout << "После минимального элемента " << col << " отрицательных элементов";
	free(A);
}