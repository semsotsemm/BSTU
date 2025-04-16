#include <iostream>

int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int n = 200;
	double a, b, h, x, s1 = 0,s2=0,s;
	cout << "Введите значение переменной а ";
	cin >> a;
	cout << "Введите значение переменной b ";
	cin >> b;
	h = (b - a) / (2*n); x = a+(2*h);
	for (int i = 1; i < n; i++)
	{
		s2 = s2 + x*x*x-3;
		x = x + h;
		s1 = s1 + x * x * x - 3;
	    x = x + h;
	}
	s = h / 3 * ((a*a*a-3)+4*(pow((a+h),3)-3)+4*s1+2*s2+(b*b*b-3));
	cout << s;
}