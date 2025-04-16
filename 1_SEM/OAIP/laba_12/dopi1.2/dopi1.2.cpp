#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE,"Russian");
	int a[10], b[10], maxint=-2,n=-1;
	cout << "Массив а: ";
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{   *(a + i) = rand() % 10;
		*(b + i) = rand() % 10;
		cout << *(a + i) << " ";
	}
	cout <<endl<< "Массив b: ";
	for (int i = 0; i < 10; i++)
	cout << b[i]<<" ";
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (*(a + i) == *(b + j))
			n = *(a + i);
		}
		if (n==-1 && maxint<n)
		{
			maxint = *(a + i);
		}
		n = -1;
	}
	cout <<endl<< "Максимальный элемент массива а, которого нет в элементе б: " << maxint;
}