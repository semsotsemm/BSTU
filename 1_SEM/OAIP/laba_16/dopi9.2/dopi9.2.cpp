#include <iostream>

using namespace std;
void firstsymb(int n,int len,int **mas) 
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < len; j++)
			mas[i][j] = rand() % 25 + 97;
	for (int i = 0; i < n; i++)
		if (mas[i][0] == 'b')
		{
			for (int j = 0; j < len; j++)
			{
				char b = mas[i][j];
				cout << b;
			}
			cout << endl;
		}
}

int main()
{
	setlocale(LC_CTYPE,"Russian");
	int n,len;
	cout << "Введите количество строк ";
	cin >> n;
	cout << "Введите длинну 1 строки ";
	cin >> len;
	int **mas = new int* [n];
	for (int i = 0; i < n; i++)
		mas[i] = new int[len];
	firstsymb(n, len, mas);
}