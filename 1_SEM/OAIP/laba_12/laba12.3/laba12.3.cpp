﻿#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int i, k, sz = 5;
	float A[] = { 5, -4, 17.1, 9, 1,8 };
	cout << "Введите номер элемента (от 0 до 4) " << endl;
	cin >> k;
	cout << endl;
	for (i = k; i < sz - 1; i++)
		*(A + i) = *(A + i + 1);
	for (i = 0; i < sz; i++)
		cout << *(A + i) << endl;
}