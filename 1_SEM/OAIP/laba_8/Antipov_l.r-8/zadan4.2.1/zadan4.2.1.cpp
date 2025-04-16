#include <iostream>

int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int m;
	double	c, b, g=1, pr = 1;
	cout << "Введите значение переменной m " << endl; cin >> m;
	cout << "Введите значение переменной c " << endl; cin >> c;
	cout << "Введите 4 значений переменной b " << endl;
	for (int j = 1; j <= m; j++)
	{
		cin >> b;
		pr *= pow((b+1),2);
	}
    g = c*pr;
	cout << g;
}