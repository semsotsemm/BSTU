#include <iostream>
using namespace std;

int main()
{
	int const maxsize = 100;
    setlocale(LC_CTYPE,"Russian");
    srand((unsigned)time(NULL));
	int n=0, A[maxsize], B[maxsize], S	[maxsize];
	cout << "Введите количество элементов массива "; cin >> n;
	cout << "Массив А: ";
	for (int i = 0; i < n; i++)
	{
		*(A + i) = rand() % 10;
		*(B + i) = rand() % 10;
		*(S + i) = *(B + i) + *(A + i);
		cout << A[i] << " ";
	}
	cout << endl << "Массив B: ";
	for (int i = 0; i < n; i++)
	{
		cout << *(B + i) << " ";
	}
	cout << endl << "Массив S(состоящий из суммы соответствующих элементов массивов A и B): ";
	for (int i = 0; i < n; i++)
	{
		cout << *(S + i) << " ";
	}
}