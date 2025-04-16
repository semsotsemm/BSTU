#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE,"Russian");
	srand((unsigned)time(NULL));
	const int maxsize = 100;
	int n,A[maxsize],maxrand=10,minint=maxrand+1,repit=0;
	cout << "Введите размер массива n: "; cin >> n;
	cout << "Массив А: ";
	for (int i = 0; i < n; i++)
	{
		*(A + i) = rand() % maxrand+1;
		cout << *(A + i) << " ";
	}
	for (int i = 1; i < maxrand+1; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == *(A + j))
			{
				repit++;
			}
		}
		if (repit==0&&minint>i)
		{
			minint = i;
		}
		repit = 0;
	}
	cout <<endl<< "Наименьшее натуральное число, отсутствующее в массиве: "<<minint;
}