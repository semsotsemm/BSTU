#include <iostream>
#include <iomanip>

void main()
{
	int n, i, j;
	using namespace std;
	printf("Enter n: ");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		if (i>1)
		{
			cout << i  << '|';
		}
		for (j = 1; j <= n; j++)
			printf("%5d", i * j);
		if (i == 1)
		{
			cout << endl;
			cout << setw(5 * n) << setfill('-') <<
				'-' << endl;
		}
		printf("\n");
	}
}