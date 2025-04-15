#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	double z, u, c = 1.4 , y = 0.5, x = 2e-4;
	z = exp(c*x) /y + 3;
	u = sqrt(pow(z,3)-0.1*z);
	std::cout << "z = " << z << std::endl;
	std::cout << "u = " << u;
	//вар.9
}
