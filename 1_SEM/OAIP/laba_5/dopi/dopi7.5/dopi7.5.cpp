#include <iostream>

int main()
{
    int a, b, c, r, s, t,n;
    using namespace std;
    setlocale(LC_CTYPE, "Russian");
    cout << "Введите размеры коробки axbxc"<< endl;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    if (a < b) { n = a; a = b; b = n; };
    if (a < c) { n = a; a = c; c = n; };
    if (b < c) { n = b; b = c; c = n; };
    cout << "Введите размеры посылки rxsxt"<< endl;
    cout << "r = "; cin >> r;
    cout << "s = "; cin >> s;
    cout << "t = "; cin >> t;
    if (r < s) { n = r; r = s; s = n; };
    if (r < t) { n = r; r = t; t = n; };
    if (s < t) { n = s; s = t; t = n; };
    if (a - r > 0 && b - s > 0 && c - t > 0 )
    {
        cout << "Посылка поместится в коробку";
    }
    else 
    {
        cout << "Посылка не поместится в коробку";
    }
}