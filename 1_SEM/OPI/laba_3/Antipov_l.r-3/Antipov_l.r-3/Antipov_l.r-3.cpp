#include <iostream>
#include <iomanip>
#include <bitset>

int main()
{
	setlocale(LC_CTYPE,"Russian");
	int u,uy = 0;
	u = 0;
	char k; k = ' ';
	using namespace std;
	cout << setw(10) << setfill(k) << "десятичная" << setw(20) << setfill(k) << "двоичная" << setw(20) << setfill(k) << "шестнадцатиричная" << endl;
	for (int i = 0; i < 21; i++)
	{
		cout << setw(10) << setfill(k) << dec << i << setw(20);
		for (int j = 0; j < 1; j++)
		{
			cout << setfill(k) << bitset<8>(u);
		}
		for (int pw = 0; pw < 1; pw++)
		{
			cout << setw(20) << setfill(k) << hex << uy << "\n";
		}
		uy++;
		u++;
	}
	return 0;
}