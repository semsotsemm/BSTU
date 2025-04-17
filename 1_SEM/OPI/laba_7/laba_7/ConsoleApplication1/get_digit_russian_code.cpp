#include <iostream>
#include "get_digit_russian_code.h"

using namespace std;

void getDigitRussianCode(int code, int difference)
{
	if ((code >= 224 && code <= 255)|| (code >= 192 && code <= 223) || (code == 168) || (code == 184))
	{
		cout << "Разница кодов прописной и строчной буквы русского алфавита в Windows1251 = " << difference;
	}
	else 
	{
		cout << "Ошибка ввода.";
	}
}