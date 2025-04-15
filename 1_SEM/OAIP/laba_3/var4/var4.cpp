#include <iostream>
#include <iomanip>

int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	double p, q, t , y = -1.2, x = 0.4e6;
	printf("Введите t, однозначное число ");
	cin >> setw(1) >> t;
	p = 2.6 * t + cos(y / 3 * x + y);
	q = sin(t) / cos(t);
	std::cout << "p = " << p << std::endl;
	std::cout << "q = " << q;
	//вар.4
}
