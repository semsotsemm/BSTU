#include <iomanip>
#include <iostream>
#include <windows.h>

int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int otv;
	puts("Cыграем в камень ножницы бумага? (1-да, 2-нет)");
	cin >> otv;
	switch (otv)
	{
	case 1: {
		puts("Напиши свой выбор (1-камень, 2-бумага, 3-ножницы)"); 
		cin >> otv;
		switch (otv)
		{
		case 1: puts("Вы проиграли"); break;
		case 2: puts("Ничья"); break;
		case 3: puts("Вы выйграли"); break;
		default: puts("error");
		}
		break;
	}
	case 2: puts("Правильно, пиши лабы :)"); break;
	default: puts("error");
	}
}