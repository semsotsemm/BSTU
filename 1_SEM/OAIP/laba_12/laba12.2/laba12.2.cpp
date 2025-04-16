#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE,"Russian");
	const int size=20;
	int A[size],n,max=0;
	cout << "Введите максимально возможный элемент массива n "; cin >> n;
	for (int i = 0; i < size; i++)
	{
		A[i] = rand() % (n-1) + 0;
		cout << "A" << i + 1 << " = " << A[i]<<endl;
		if (A[i]>max)
		{
			max = A[i];
		}
	}
	cout << "Максимальный элемент массива: " << max;
}
