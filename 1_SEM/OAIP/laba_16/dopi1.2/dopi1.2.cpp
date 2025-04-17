#include <iostream>
#include <Windows.h>
#include<string>

using namespace std;

 void tochka(string a)
{
     SetConsoleOutputCP(1251);
     for (int i = 0; i<size(a); i++)
     {
         if (a[i] == ' ' && i != size(a) - 1 && i != 0)
         {
             if (a[i - 1] == '.')
                 i++;
         }
         else if(a[i]!='.')
             a[i] = a[i] + 32;
     }
     cout << a;
}
int main()
{
    SetConsoleCP(1251);
    setlocale(LC_CTYPE,"Russian");
    string a;
    cout << "Введите строку состоящую только из прописных букв: \n"; 
    getline(cin, a);
    tochka(a);
}