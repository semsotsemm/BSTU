#include <iostream>
#include <cmath>

int main()

{
	double  price1, procent;
	int n, price;
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	cout << "Ввелите количество лет n" << endl;
	cout << "n = ";
	cin >> n;
	cout << "Ввелите первоначальную цену price" << endl;
	cout << "price = ";
	cin >> price;
	cout << "Введите на сколько фермер повышает цену (в процентах)" << endl;
	cout << "procent = ";
	cin >> procent;
	procent = procent / 100;
	procent = (1 - procent) * (1 + procent);
	procent = pow(procent, n);
	price1 = price * procent;
	price1 = price - price1;
	cout << "цена уменьшится на " << price1;
}

