#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE,"Russian");
	const int maxsize = 100;
	int size,sizeint=0,j=0,k=0,x,sizech=0;
	char a[maxsize], b[maxsize],c[maxsize];
	srand((unsigned)time(NULL));
	cout << "Введите размер массива A (<100) "; cin >> size;
	for (int i = 0; i < size; i++)
	{
		cout << "Введите " << i + 1 << " элемент массива ";
	    cin >> a[i];
		x = a[i] - 48;
		if (x <= 9 && x >= 0)
		{
			sizeint++;
			b[j] = a[i];
			j++;
		}
		else 
		{
			sizech++;
			c[k] = a[i];
			k++;
		}
	}
	cout << "Массив B: ";
	for (int i = 0; i < sizeint; i++)
	{
		cout << b[i] << " ";
	}
	cout << endl;
	cout << "Массив C: ";
	for (int i = 0; i < sizech; i++)
	{
		cout << c[i] << " ";
	}
}