#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int i, k, size = 4;
	double mid=0;
	float massivA[] = { 5, -4, 17.1, 9, 1 };
	cout << "Введите номер элемента (от 0	до 4)";
		cin >> k;
	for (i = k; i <= size; i++)
		massivA[i] = massivA[i + 1];
	size--;
	for ( i = 0; i <= size; i++)
	{
		mid += massivA[i];
	}
	for (i = 0; i <= size; i++)
		cout << massivA[i] << endl;
	cout << "Средней значение элементов: " << mid/size;
}