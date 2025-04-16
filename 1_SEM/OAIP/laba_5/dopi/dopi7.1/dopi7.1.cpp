#include <iostream>

int main()
{
    int a, b, c,sum;
    setlocale(LC_CTYPE, "Russian");
    using namespace std;
    cout << "Введите a,b,c" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    if (a%5 != 0 && b%5 != 0 && c%5 != 0)
    {
        cout << "Error"; 
    }
    if (a % 5 != 0)
    {
        a = 0;
    }
    if (b % 5 != 0)
    {
        b = 0;
    }
    if (a % 5 != 0)
    {
        c = 0;
    }
    sum = a + b + c;
    cout << "Сумма чисел, кратнях 5 : " << sum;
}