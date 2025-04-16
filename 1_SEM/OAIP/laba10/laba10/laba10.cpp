#include <iostream>
#include <ctime>

void main()
{
	setlocale(LC_CTYPE,"Russian");
	using namespace std;
	const int N = 100;
	int i, sz, A[N],sum=0 ,rmn = 0, rmx = 99;
	cout << "Введите размер массива "; 
	cin >> sz;
	cout << "Массив А:" << endl;
	srand((unsigned)time(NULL));
	for (i = 0; i < sz; i++)
	{
		A[i] = (int)(((double)rand() / (double)RAND_MAX) * (rmx - rmn) + rmn);
		cout << A[i] << endl;
		sum += A[i];
	}
	cout << "Сумма всех элементов массива: " << sum;
}