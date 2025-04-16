#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int k;
	puts("Хотите ли вы купить квартиру? (1 - да, 2 - нет)");
	std::cin >> k;
	switch (k)
	{
	case 1: {
		puts("В каком городе (1- Минск, 2-Гродно, 3-Могилев)");
		std::cin >> k;
		switch (k)
		{
		case 1: puts("... удачи"); break;
		case 2: puts("Хороший выбор"); break;
		case 3: puts("Сомнительный выбор"); break;
		}
		break;
	}
	case 2: puts("Правильно, в общаге веселей"); break; default: puts("Некорректный вариант"); break;
	}
	return 0;
}