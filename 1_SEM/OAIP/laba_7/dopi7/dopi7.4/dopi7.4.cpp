#include <iostream>

int main()
{
	using namespace std;
	setlocale(LC_CTYPE,"Russian");
	int a = 1000,a1,a2,a3,a4;
	while(a<=9999)
	{
		a1 = a / 1000;
		a2 = (a / 100) % 10;
		a3 = (a / 10) % 10;
		a4 = a % 10;
		if (a1 == a2 || a1 == a3  || a1 == a4)
		{
			if (a3 == a4 || a2 == a4 || a2 == a3)
			{
				if (a % 2 == 0 && a % 7 == 0 && a % 11 == 0 && a1 + a2 + a3 + a4 == 30)
				{
					cout << "Номер автомобиля: " << a;
				}
			}
		}
		a++;
	}
}
