#include <iostream>
#include <windows.h>


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    unsigned char pr,str;
    using namespace std;
    setlocale(LC_CTYPE, "Russian");
    cout << "Введите прописную букву "; cin >> pr;
    if ((pr>96&&pr<123)||(pr>191&& pr<<256))
    {
        str = pr + 32;
        cout << "Строчная буква : " << str;
    }
    else
    {
        cout << "Ваш символ не прописная буква";
    }
}