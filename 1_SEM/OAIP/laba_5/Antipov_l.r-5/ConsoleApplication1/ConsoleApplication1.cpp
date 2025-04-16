#include <iostream>
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	float x, y, z, n ;
	cout << "Введите x "; 
	cin >> x;
	cout << "Введите y "; 
	 cin >> y;
	cout << "Введите z "; 
	cin >> z;
	if (x < y) {
		n = x;
		x = y;
		y = n;
	}

	if (x < z) {
		n = x;
		x = z;
		z = n;
	}

	if (y < z) {
		n = y;
		y = z;
		z = n;
	}
	cout << x<<" " << y << "" << z;
}