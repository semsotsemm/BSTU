#include <iostream>

int main()
{
    char k, m;
    int l, n;
    using namespace std;
    setlocale(LC_CTYPE, "Russian");
    cout << "Введите положение слона k,l"<< endl;
    cout << "k = "; cin >> k;
    if (k <= 'H' && k >= 'A')
    {
        k = k - 64;
    }
    else 
    {
        cout << "k - буква английского алфавита от A до H";
    }
    cout << "l = "; cin >> l;
    cout << "Введите положение фигуры m,n" << endl;
    cout << "m = "; cin >> m;
    if (m <= 'H' && m >= 'A')
    {
        m = m - 64;
    }
    else
    {
        cout << "m - буква английского алфавита от A до H";
    }
    cout << "n = "; cin >> n;
   if (abs(k - n) == abs(l - m)) 
   {
   cout << "Cлон угрожает фигуре ";
   }
   else 
   {
   cout << "Cлон не угрожает фигуре ";
   }
}