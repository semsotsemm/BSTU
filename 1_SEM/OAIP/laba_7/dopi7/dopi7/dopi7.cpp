#include <iostream>
#include <string>

int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	string a="10";
	int b = stoi(a),n=0;
	while (b * b < 1000)
	{
		b = b * b;
		a = to_string(b);
		b = sqrt(b);
		if (a[0] < a[1] && a[0] < a[2] && a[1] < a[2])
		{
			for (int i = 2; i <= b ; i++)
			{
				if (b % i == 0)
				{
					n++;
				}
			}
		}
		if (n == 1)
		{
			cout << b * b << " ";
		}
		n = 0;
		b++;
	}
	return 0;
}