#include <iostream>

int main()
{
    char k, m,r;
    int l, n,s;
    using namespace std;
    setlocale(LC_CTYPE, "Russian");
    cout << "Введите положение черного короля m,n" << endl;
    cout << "m = "; cin >> m;
    m = m - 64;
    cout << "n = "; cin >> n;
    cout << "Введите положение белого слона k,l" << endl;
    cout << "k = "; cin >> k;
    k = k - 64;
    cout << "l = "; cin >> l;
    cout << "Введите положение белой ладьи r,s" << endl;
    cout << "r = "; cin >> r;
    r = r - 64;
    cout << "s = "; cin >> s;
    if (abs(k - n) == abs(l - m))
    {
        if (r == m || s == n)
        {
            cout << "И ладья и слон угрожают королю ";
        }
        else {
            cout << "Cлон угрожает королю ";
        }
    }
    else
    {
        if (r == m || s == n)
        {
            cout << "Ладья угрожает королю ";
        }
    }
}