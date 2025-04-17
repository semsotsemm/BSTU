#include <iostream>
#include <iomanip>

int main()
{
	int u = 0;
	char k; k = ' ';
	using namespace std;
	cout << setw(10) << setfill(k) << "10" << setw(20) << setfill(k) << "2" << setw(20) << setfill(k) << "16" << endl;
	for (int i = 0; i < 21; i++)
	{
		cout << setw(10) << setfill(k) << i << setw(20);
		for (int u = 0; u < i;)
		{
			cout << setw(10) << setfill(k) << hex << u << "\n";
			u++;
		}
	}


	return 0;
}
