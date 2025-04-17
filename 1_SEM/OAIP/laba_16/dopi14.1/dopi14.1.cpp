#include <iostream>
using namespace std;

int main()
{

	setlocale(LC_CTYPE,"Russian");
	int n, min = 0, sum = 0;
	cout << "Введите размер массива: ";
	cin >> n;
	int* A = new int[n];
	cout << "Введите элементы массива " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Введите элемент массива: ";
		cin >> A[i];
		if (abs(A[i])<abs(min))
			min = A[i];
		if (i==0)
			min = A[i];
	}
	for (int i = 0; i < n; i++)
		if (A[i] < 0 && i!=n-1)
		{
			for (int j= i+1; j<n; j++)
				sum += abs(A[j]);
			break;
		}
	cout<<"min: "<<min<<" sum: "<<sum;
	for (int i = 0; i < n; i++)
		free(A);
}