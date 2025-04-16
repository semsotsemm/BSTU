#include <iostream>

int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int a = 50, b = 20, c = 5, d = 2,n=0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0;j < 5; j++)
		{
			for (int p = 0; p < 20; p++)
			{
				for (int u = 0; u < 50; u++)
				{
					if (a*i+b*j+c*p+d*u == 100)
					{
						n++;
					}
				}
			}
		}
	}
	cout <<"Способов получить рубль при помощи монет достоинством: 50 коп., 20 коп., 5 коп. и 2 коп. = " << n;
}	