#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE,"Rus");
	const int maxsize =100;
	int m[maxsize],size,sum=0,maxsum=-1,i1;
	srand((unsigned)time(NULL));
	cout << "Ввведите сколько недель проводились измерения(<15) ";
	cin >> size;
	cout << "Количество осадков в "<<endl;
	for (int i = 0; i < size; i++)
	{
			for (int j = 0; j < 7; j++)
			{
				m[j] = rand() % 100;
				sum += m[j];
			}
		if (maxsum<sum)
		{
			maxsum = sum;
			i1 = i;
		}
		cout << i + 1 << " неделю: " << sum << endl;
		sum = 0;
	}
	cout << "Максимальное количество осадков было в " << i1+1<<" неделю";
}