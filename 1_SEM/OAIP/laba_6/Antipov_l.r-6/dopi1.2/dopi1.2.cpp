#include <iostream>

int main()
{
	using namespace std;
	float h, y, r = 4e-4, j=0, c = 2.1, m = 7;
	setlocale(LC_CTYPE, "Russian");
     while (j < 1.8)
	{ 
		h = (10 * r - j) / (pow(c, 2) + exp(-m));
		y = (h * m - pow(j, 2)) + pow(0.1 * c, 2);
		cout << "Если j = " << j << " h = "<< h << " ,y = " << y << endl;
		j = j + 0.1;
	}
}