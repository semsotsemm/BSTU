#include <iostream>
#include <Windows.h>
#include<string>
using namespace std;

void minmodsum() {
	int n;
	cout << "Введите размер массива ";
	cin >> n;
	int* A = new int[n];
	cout << "Введите элементы массива " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Введите элемент массива: ";
		cin >> A[i];
	}
	int min = 0,sum=0;
	for (int i = 0; i < n; i++)
	{
		if (abs(A[i]) < abs(min))
			min = A[i];
		if (i == 0)
			min = A[i];
	}
	for (int i = 0; i < n; i++)
		if (A[i] < 0 && i != n - 1)
		{
			for (int j = i + 1; j < n; j++)
				sum += abs(A[j]);
			break;
		}
	cout << "Минимальный по модулю элемент массива: " << min << " ,сумма элементов после 1 отрицательного: " << sum;
	free(A);
}

void BGTU(string a)
{
	string bstu = "БГТУ";
	int repeat = 0;
	for (int i = 0; i < size(a); i++)
	{
		for (int j = 0; j < size(bstu); j++)
		{
			if (a[i] == bstu[j])
			{
				i++;
				repeat++;
			}
			else
				break;
		}
		if (repeat == size(bstu))
		{
			cout << "В данной строке есть слово БГТУ";
			return;
		}
	}
	cout << "В данной строке нет слова БГТУ";

}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string a;
	int choose;
	setlocale(LC_CTYPE, "Russian");
	do
	{
		cout << endl << "Выберите вариант работы программы\n";
		cout << "1 - мин по модулю элемент массива и сумма после 1 отрицательного \n";
		cout << "2 - проверить есть ли в строке  слово БГТУ\n";
		cout << "3 - выход \n";
		cin >> choose;
		switch (choose)
		{
		case 1:
			minmodsum();
			break;
		case 2:
			cout << "Введите строку " << endl;
			cin.ignore();
			getline(cin, a);
			BGTU(a);
			break;
		case 3:
			break;
		}
	} while (choose != 3);
}