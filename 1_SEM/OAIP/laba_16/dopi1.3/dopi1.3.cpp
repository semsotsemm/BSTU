#include <iostream>
#include <Windows.h>
#include<string>

using namespace std;

void swap(int** A, int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if ((i + 1) % 2 != 0 && A[i][j] < 0)
				A[i][j] = -A[i][j];
	for (int i = 0; i < m; i++)
	{
		cout << endl;
		for (int j = 0; j < n; j++)
			cout << A[i][j] << "\t";
	}
	for (int i = 0; i < n; i++)
		delete A[i];
	delete[] A;
}

void tochka(string strok)
{
	for (int i = 0; i < size(strok); i++)
	{
		if (strok[i] == ' ' && i != size(strok) - 1 && i != 0)
		{
			if (strok[i - 1] == '.')
				i++;
		}
		else if (strok[i] != '.')
			strok[i] = strok[i] + 32;
	}
	cout << strok;
}

int main()
{
    setlocale(LC_CTYPE,"Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string strok;
	int choose, n, m, ** A;
	do
	{
		cout << endl << "Выберите вариант работы программы\n";
		cout << "1 - записать матрицу и изменить в ней все отрицательные элементы в нечетных строках на такие же положительные \n";
		cout << "2 - преобразовать строку сост. только из проп. букв в строку с проп. и стр. буквами при этом 1 буква после точки и пробела: проп., остальные: строчн. \n";
		cout << "3 - выход \n";
		cin >> choose;
		switch (choose)
		{
		case 1:
			cout << "Введите количество строк матрицы ";
			cin >> m;
			cout << "Введите количество столбцов матрицы ";
			cin >> n;
			A = new int* [m];
			cout << "Введите элементы матрицы \n";
			for (int i = 0; i < m; i++)
			{
				A[i] = new int[n];
				for (int j = 0; j < n; j++)
				{
					cout << "Введите [" << i + 1 << " " << j + 1 << "] элемент ";
					cin >> A[i][j];
				}
			}
			swap(A, m, n);
			break;
		case 2:
			cin.ignore();
			getline(cin, strok);
			tochka(strok);
			cout << "Введите строку состоящую только из прописных букв: \n";
			break;
		case 3:
			break;
		}
	} while (choose!=3);
}