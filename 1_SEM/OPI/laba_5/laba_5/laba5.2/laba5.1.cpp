#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE,"Russian");
	char fam = 'N', fam1 = 'n';
	int code = fam, code1 = fam1;
	cout << "Разница кодов: " << code1 - code;
}