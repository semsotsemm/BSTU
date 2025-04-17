#include <ctime>
#include <iostream>
using namespace std;
void main()
{
	int size, mult = 1, sum = 0, ** A,quan=0, maxsum=0;
	cout << "Enter size ";
	cin >> size;
	srand(time(0));
	cout << "Massiv: ";
	A = new int* [size];
	for (int i = 0; i < size; i++)
	{
		A[i] = new int[size];
		cout<<"\n";
		for (int j = 0; j < size; j++)
		{
			A[i][j] = -3 + rand() % 20;
			cout << A[i][j]<<"\t";
		}
	}
	for (int** ptr = A; ptr != A + size; ++ptr)
	{
		for (int* it = *ptr; it != *ptr + size; ++it)
			if (*it >= 0)
				quan++;
		if (quan == size) 
		{
			for (int* it = *ptr; it != *ptr + size; ++it)
				mult *= *it;
			cout << "\n mult: "<< mult;
		}
		mult = 1;
		quan = 0;
	}
	int i = 3;
	for (int k = 0; k < 2*size-1; k++)
	{
		if (k < size-1)
		{
			for (int j = k; j >= 0; j--)
			{
				sum += A[i][j];
				i--;
			}
			i = 3;
		}
		else if (k>size-1)
		{
			i = 0;
			for (int j = k-size+1; j < size; j++)
			{
				sum += A[i][j];
				i++;
			}
		}
		if (maxsum<sum)
			maxsum = sum;
		sum = 0;
	}
	cout << "\n max sum: " << maxsum << endl;
	for (int k = 0; k < size; k++)
		delete[] A[k];
	delete[] A;
}