#include <windows.h>
#include <stdio.h>
#include <conio.h>

void main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	char name[60];
	puts("Как вас зовут? ");
	gets_s(name);
	printf("Привет, %s\n", name," ! ");
	printf("Чем занимаешься , %s\n", name, " ?");
	gets_s(name);
	printf("0_0 нууу удач тебе ");
}