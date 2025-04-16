#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_CTYPE,"Russian");
    float a, sum = 0; int i;
    cout << "Введите переменную а ";
        cin >> a;
    while( a > 0)
    {
        if (sum==0)
        {
            sum = a;
        }
        else
        {
            sum = a *sum;
        }
        a--;
    }
    cout << "Ответ " << sum << endl;
}