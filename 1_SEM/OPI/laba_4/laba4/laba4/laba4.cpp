#include <iostream>

int main()
{
    int r;
    char x;
    using namespace std;
    setlocale(LC_CTYPE, "Russian");
    cout << "Введите код символа "; cin >> r;
    x = r;
    if (r >= 0x30 && r <= 0x39)
    {
        cout << "Это цифра, " << x <<", ASCII,код символа в ASCII: ox" << hex << int(r);
    }
    else if (r >= 0x41 && r <= 0x7A)
    {
        cout << "Это латинская буква, "<<x<<", ASCII,код символа в ASCII: ox" << hex << int(r);
    }
    else if (r >= 0xC0 && r <= 0xFF)
    {
        cout << "Это русская буква, "<< x <<", Windows- 1251, код символа в таблице Windows - 1251: ox" << hex << int(r);
    }
    else 
    {
        cout << "Это не цифра и не буква, "<<x<<", код символа в таблице Windows - 1251: 0x" << hex << int(r);
    }
}