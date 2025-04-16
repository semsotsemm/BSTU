#include <iostream>

int main()
{
    setlocale(LC_CTYPE, "Russian");
    using namespace std;
    double d,a,b,c,x1,x2 ;
    cout << "Введите a " << endl;
    cout << "a = ";
    cin >> a;
    cout << "Введите b " << endl;
    cout << "b = ";
    cin >> b;
    cout << "Введите c " << endl;
    cout << "c = ";
    cin >> c;
    d = b * b - 4 * a * c;
    if (d < 0)
    {
        cout << "Корней нет";
    }
    else {
        x1 = (( - 1) * b + sqrt(d)) / (2 * a);
        x2 = (( - 1) * b - sqrt(d)) / (2 * a);
        cout << "x1 = " << x1 << " x2 = " << x2;
    }
}

