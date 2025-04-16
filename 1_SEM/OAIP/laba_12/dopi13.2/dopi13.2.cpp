#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE,"Russian");
	srand((unsigned)time(NULL));
	int A[10];
	double sum=0;
	cout << "Массив А: ";
	for (int i = 0; i < 10; i++)
	{
		*(A + i) = rand() % 10;
		cout << *(A + i) <<" ";
		sum += *(A + i);
	}
	sum /= 10;
	cout <<endl<< "Среднее арифметическое: "<<sum<<endl;
	cout << "Элементы меньше среднего арифметического: ";
	for (int i = 0; i < 10; i++)
	{
		if (sum > *(A + i))
		{
			cout << *(A + i) <<" ";
		}
	}
	cout << endl<< "Элементы больше среднего арифметического: ";
	for (int i = 0; i < 10; i++)
	{
		if (sum < *(A + i))
		{
			cout << *(A + i) <<" ";
		}
	}
}