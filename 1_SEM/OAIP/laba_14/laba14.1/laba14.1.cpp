#include <iostream>
void main()
{
	const int ci = 4; const int cj = 3;
	int a[ci][cj] = { { 1, 2,8 }, { 3, 4,1 }, { 5, 6,5 },{ 6, 7,1 } };
	for (int i = 0; i < ci; i++)
	{
		for (int j = 0; j < cj; j++)
			std::cout  << a[i][j] << " ";
		std::cout << "\n";
	}
}