#include <iostream>

int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
   double r, d1, d2, r1;
   cout << "Введите радиус шара r" << endl;
   cout << "r = "; cin >> r;
   cout << "Введите первую диагональ p" << endl;
   cout << "d1 = "; cin >> d1;
   cout << "Введите вторую диагональ q" << endl;
   cout << "d2 = "; cin >> d2;
   r1 = (d1 * d2) / (4 * sqrt(d1 * d1 / 4 + d2 * d2 / 4));
   if (r<=r1)
   {
	   cout << "Шар пройдет в отверстие";
   }
   else 
   {
	   cout << "Шар не пройдет в отверстие";
   }
}