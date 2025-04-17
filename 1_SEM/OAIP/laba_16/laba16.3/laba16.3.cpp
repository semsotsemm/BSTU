#include <iostream>
using namespace std;
int massiv(int* M, int); //прототип 1
void matrix(); //прототип 2
int main(void)
{
	setlocale(LC_CTYPE, "Russian");
	int choice;
	do
	{
		cout << "Выберите вариант работы" << endl;
		cout << "1 - с одномерным массивом" << endl;
		cout << "2 - с матрицей" << endl;
		cout << "3 - выход" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1: int* M, size, i, av; //если с клавиатуры введено значение 1 выполняет case1
			cout << "Введите размер массива ";
			cin >> size;
			M = new int[size]; //создает новый массив целых чисел M размером size
			for (i = 0; i < size; i++)
			{
				cout << "Введите " << i + 1 << " число ";
				cin >> *(M + i); //инициализирует каждый элемент массива M
			}
			av = massiv(M, size); //передает в фунцию massiv значения элементов массива M, а также его размер, результат вывполнения функции возвращает в переменную av
			cout << "Результат=" << av << endl;
			delete[] M; // очистка памяти 
			break;
		case 2: matrix(); //если с клавиатуры введено значение 2 вызывает фунцию matrix
			break;
		case 3: break; //если с клавиатуры введено значение 3 выходит из switch/case
		}
	} while (choice != 3); //цикл работает пока значение переменной choice не равно 3
}
int massiv(int* M, int size) //функция massiv
{
	int sum = 0, avar;
	for (int i = 0; i < size; i++)
		sum += *(M + i);
	avar = sum / size; 
	return avar; //возвращает переменную avar в которой хранится среднее арифметическое всех элементов массива
}
void matrix()
{
	int** A, row, col, i, j, m;
	cout << "Введите число строк матрицы ";
	cin >> row; cout << "Введите чиcло столбцов ";
	cin >> col;
	A = new int* [row]; // создает массив с row рядов
	for (i = 0; i < row; i++)
		A[i] = new int[col]; // в каждом ряду создает col колонок
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
		{
			cout << "Введите A[" << i << "],[" << j << "]= ";
			cin >> *(*(A + i) + j); //инициализирует каждый элемент матрицы
		}
	m = A[0][0];
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
			if (*(*(A + i) + j) > m)
				m = *(*(A + i) + j); // ищет максимальное значение среди всех элементов матрицы 
	cout << "Результат=" << m << endl;
	for (i = 0; i < row; i++)
		delete A[i];
	delete[] A; // очистка памяти
}
