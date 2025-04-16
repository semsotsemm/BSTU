#include <iostream>

int main()
{
	using namespace std;
	setlocale(LC_CTYPE,"Russian");
	int n;
	double	d,a,h,add=0;
	cout << "Введите значение переменной n "<< endl; cin >> n;
	cout << "Введите значение переменной d "<< endl; cin >> d;
	cout << "Введите 5 значений переменной a" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> a;
		add += a * a;
	}
	h = d + add;
	cout << h;
}