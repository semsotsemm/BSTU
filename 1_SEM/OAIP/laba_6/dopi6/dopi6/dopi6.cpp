#include <iostream>

int main()
{
	int n=1;
	double p,q;
	using namespace std;
	setlocale(LC_CTYPE,"Russian");
	cout << "Введите выручку в первый день (в тыс.) p "; cin >> p;
	cout << "Введите какая прибыль должна быть в результате увеличения прибыли (в тыс.) q "; cin >> q;
	while (q>p)
	{
		p = p * 1.03;
		n = n + 1;
	}
	cout << "Выручка превысит заданное значения в " << n << " день" << endl;
	cout << "И составит " << q << " тыс. рублей" << endl;
}