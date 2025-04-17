#include <iostream>
using namespace std;

int main()
{
		char t[3][20];
		int i, n;
		cout << "Input size (<=3): ";
		cin >> n;
		//В буфере остается /n
		//cin.ignore(cin.rdbuf()->in_avail());
		for (i = 0; i < n; i++)
		{
			cout << "Input string: ";
			// /n считывается как пустая строка 
			gets_s(t[i]);
		}
		for (i = 0; i < n; i++)
			puts(t[i]);
}