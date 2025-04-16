#include <iostream>
#include <vector>

int main()
{
	double s,sum = 0,pr,p;
	int n;
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	cout << "Введите на сколько процентов оборудование изнашивалось каждый год "; cin >> p;
	p = 1 - (p / 100);
	cout << "Введите на протяжении скольких лет фирма закупала оборудование "; cin >> n;
	for (int i = n; 0 < i; i--)
	{
		cout << "Введите на сколько рублей фирма закупела оборудование в " << i << " год "; cin >> s;
		pr = pow(p,i);
		sum = sum + s * pr;
	}
	cout << "Общая стоимость накопленного оборудования за " << n << " лет = " << sum << endl;
}