#include <iostream>
#include<string>
using namespace std;

void summa(string a) {
    int sum = 0;
    string num = "0123456789";
    for (int i = 0; i < size(a); i++)
        for (int j = 0; j <= 10; j++)
            if (a[i] == num[j])
                sum += a[i] - '0';
    cout << sum;
}

void newmatrix(int** A, int** B, int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			if (i == 0)
				B[i][j] = A[i][j] - A[n - 1][j];
			else
				B[i][j] = A[i][j] - A[i - 1][j];
		}
	cout << endl << "Исходная матрица: ";
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		for (int j = 0; j < n; j++)
			cout << B[i][j] << "\t";
	}
	for (int i = 0; i < n; i++)
	{
		delete A[i];
		delete B[i];
	}
	delete[] A;
	delete[] B;
}


int main()
{
	int choose,n, ** A, ** B;
	string a;
	setlocale(LC_CTYPE, "Russian");
	do
	{
		cout << endl << "Выберите вариант работы программы\n";
		cout << "1 - из каждой строки матрицы вычесть предыдущую (из первой полседнюю) \n";
		cout << "2 - посчитать сумму цифр входящих в строку символов \n";
		cout << "3 - выход \n";
		cin >> choose;
		switch (choose)
		{
		case 1:
			cout << "Введите размер матрицы ";
			cin >> n;
			A = new int* [n];
			B = new int* [n];
			cout << "Введите элементы матрицы " << endl;
			for (int i = 0; i < n; i++)
			{
				A[i] = new int[n];
				B[i] = new int[n];
				for (int j = 0; j < n; j++)
				{
					cout << "Введите [" << i + 1 << " " << j + 1 << "] элемент матрицы ";
					cin >> A[i][j];
					B[i][j] = 0;
				}
			}
			cout << "Ваша матрица: ";
			for (int i = 0; i < n; i++)
			{
				cout << endl;
				for (int j = 0; j < n; j++)
					cout << A[i][j] << "\t";
			}
			newmatrix(A, B, n);
			break;
		case 2:
			cout << "Введите строку: ";
			cin.ignore();
			getline(cin, a);
			summa(a);
			break;
		case 3:
			break;
		}
	} while (choose != 3);
}