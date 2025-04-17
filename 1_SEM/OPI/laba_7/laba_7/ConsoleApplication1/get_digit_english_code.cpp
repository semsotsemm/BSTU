#include <iostream>
#include "get_digit_english_code.h"

using namespace std;

void getDigitEnglishCode(int code,int difference)
{
	if ((code >= 65 && code <= 90) || (code >= 97 && code <= 122))
	{
		cout << "Разница кодов прописной и строчной буквы латинского алфавита в ASCII = " << difference;
	}
	else 
	{
		cout << "Ошибка ввода.";
	}
}