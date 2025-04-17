#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int size, ** A, count = 0,min=1000,max=0,summin=0,summax=0;
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
		{
			if (i % 2 == 0 && min > A[i][j])
				min = A[i][j];
			if (i % 2 != 0 && max < A[i][j])
				max = A[i][j];
		}
		summin += min;
		if (i%2==0)
			min = 0;
		else
			min = 1000;
		summax += max;
		max = 0;
	}
	cout << "Сумма наименьших элементов нечетных строк " << summin<<endl;
	cout << "Сумма наибольших элементов ее четных строк " << summax<<endl;
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