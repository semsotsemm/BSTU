#include <iostream>
using namespace std;

int main()
{
    char strok[256],past[256];
    int size=0,n,k,b;
    setlocale(LC_CTYPE,"Russian");
    cout << "Введите строку "; cin >> strok;
    cout << "Введите количество символов которых хотите вставить в строку (n) "; cin >>n;
    cout << "Введите какие символы хотите вставить "; cin >> past;
    cout << "Введите начиная с какой позиции хотите вставить n символов (k) "; cin >> k;
    for (int i = 0; i < 256; i++)
    {
        if (strok[i] == '\0')
            break;
        else
            size++;
    }
    for (int i = size; i > 1 ; i--)
    {
        b = i-1;
        for (int j = 0; j < n; j++)
        {
            strok[b+1] = strok[b];
            b++;
        }
    }
    for (int i = 0; i < n; i++)
        strok[i + k-1] = past[i];
    strok[size + n] = '\0';
    cout << strok;
}