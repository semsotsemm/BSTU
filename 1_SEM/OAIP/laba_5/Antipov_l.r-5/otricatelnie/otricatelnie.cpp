#include <iostream>

int main()
{
    int k = 0;
    double m, n, p;
    setlocale(LC_CTYPE, "Russian");
    using namespace std;
    cout << "Введите m,n,p" << endl;
    cout << "m = " ;
    cin >> m;
    cout << "n = ";
    cin >> n;
    cout << "p = ";
    cin >> p;
    if (m < 0)
    {
        k= k+1;
    }
    if (n < 0)
    {
        k=k+1;
    }
    if (p < 0)
    {
        k=k+1;
    }
    cout << "Количество отрицательных переменных = " << k;
}