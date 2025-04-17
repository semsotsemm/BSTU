#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	char fam = 'Н', fam1 = 'н';
	int code = fam, code1 = fam1;
	cout << "Разница кодов: " << code1 - code;
}