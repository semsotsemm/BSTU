#include <iostream>
#include < cmath>

int main()
{
    double b,a, m;
    using namespace std;
    setlocale(LC_CTYPE, "Russian");
    cout << "Введите переменную m " << endl;
    cout << "m = ";
    cin >> m;
    b = (m - 5) / 2;
    a = b + 5;
    cout << "a = " << a  << " b = " << b;
}