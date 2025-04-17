#include <iostream>
using namespace std;

int sum(int *A,int n) 
{
	int summa=0,min=0,max=0,mini,maxi;
	for (int i = 0; i < n; i++)
	{
		if (min > A[i] && i!=0)
		{
			min = A[i];
			mini = i;
		}
		else if (i==0)
			min = A[i];
		if (max < A[i])
		{
			max = A[i];
			maxi = i;
		}
	}
	for (int i = maxi+1; i < mini; i++)
		summa += A[i];
	return summa;
}

int main()
{
	int n;
    setlocale(LC_CTYPE,"Russian");
	cout << "Введите длинну массива ";
	cin >> n;
	int *A = new int[n];
	cout << "Введите элементы массива " << endl;;
	for (int i = 0; i < n; i++)
	{
		cout << "Введите " << i + 1 << " элемент массива: ";
		cin >> *(A + i);
	}
	cout <<"Сумма между максимальным и минимальным эл. масс. = "<<sum(A,n);
	free(A);
}