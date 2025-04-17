#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Russian");
	int size, ** A,count=0;
	cout << "Введите размер массива ";
	cin >> size;
	A = new int* [size];
	cout << "Введите элементы массива \n";
	for (int i = 0; i < size; i++)
	{
		A[i] = new int[size];
		for (int j = 0; j < size; j++)
			cin >> A[i][j];
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
			if (A[j][i]>0)
				count++;
		if (count == size) 
		{
			for (int j = 0; j < size; j++)
				A[j][i - 1] = -A[j][i - 1];
			break;
		}
		count = 0;
	}
	cout << "Ваш массив: ";
	for (int i = 0; i < size; i++)
	{
		cout << endl;
		for (int j = 0; j < size; j++)
			cout << A[i][j] << "\t";
	}
	for (int k = 0; k < size; k++) 
		delete[] A[k];
	delete[] A;
}