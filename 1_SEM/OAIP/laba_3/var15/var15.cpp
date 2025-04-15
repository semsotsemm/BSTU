#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	double t, r, a = 1.75,b = 4.5e-4;
	t = a * exp(-2 * b) - sqrt(1 + a);
	r = log(1 + 20 * b) / (1 + a);
	cout << "t = " << t << std::endl;	
    cout << "r = " << r;
	//вар.15
}
