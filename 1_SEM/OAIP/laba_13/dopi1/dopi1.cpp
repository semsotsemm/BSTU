#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	char words[] = "Лабараторная, практическое, техническое, проеголв"; //Заданная строка 
	char end[] = "ое";// окончание
	int a= strlen(end),n=0;	
		for (int i = strlen(words); i >0; i--)
		{
			for (int k = 1; k <= a; k++)
				if ((end[a-k]==words[i-k])&& (words[i]=='\0'||words[i]==','))
					n++;
			if (n==a)
			{
				int j = i;
				while (words[j] != ' ' || j == 0)
					j--;
				while (j!=i)
					cout << words[++j];
				cout << ' ';
				n = 0;
			}
		}
}
