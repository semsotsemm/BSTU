#include <iostream>

int main()
{
	int x=1,i=1, sum=0;
	using namespace std;
	setlocale(LC_CTYPE ,"Russian");
	cout << "Введите значения переменной x, закончите ввод цифрой 0 " << endl;
	while (x!=0)
	{
		cout << "х" << i << " = ";
		cin >> x;
		if (x%2==0)
		{
			sum += x;
		}
		i++;
	}
	cout << "Сумма четных элементов массива = " << sum;
}