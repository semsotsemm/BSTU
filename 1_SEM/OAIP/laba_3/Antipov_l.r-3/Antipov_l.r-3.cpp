#include <iostream>

int main()
{
	double u, t, k = 4, a = 8.1, x = 2e-4;
	t = 2 * k / 2 + log(2 + x);
	u = (sqrt(k - 1)) / (t + 1);
	std::cout << "t = " << t << std::endl;
	std::cout << "u = " << u;
	//вар.1
}