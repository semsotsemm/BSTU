#include <iostream>
using namespace std;

int main()
{
    char tmp[33];
    int A, B,n,m,p,q;
    setlocale(LC_CTYPE,"Russian");
    cout << "Введите число A "; cin >> A;
    _itoa_s(A, tmp, 2);
    cout << "A=" << tmp << endl;
    cout << "Введите сколько битов хотите инвертировать в числе А n "; cin >> n;
    int maskA = pow(2, n) - 1;
    cout << "Введите из какой позиции в числе А хотите инвертировать биты p "; cin >> p;
    A = A >> (p - n);
    A = ~A;
    _itoa_s(A&maskA, tmp, 2);
    cout << "Выделенные и инвертированные биты А:" << tmp << endl;
    cout << "Введите число B "; cin >> B;
    _itoa_s(B, tmp, 2);
    cout << "B=" << tmp << endl;
    cout << "Введите сколько битов в числе B хотите заменить битами из числа А m "; cin >> m;
    cout << "Введите из какой позиции в числе B хотите заменить биты q "; cin >> q;
    int maskB = ~maskA << (q-m);
    maskA = maskA << (q - m);
    A = ~(~A << (q - m));
    maskB += pow(2, (q - m))-1;
    _itoa_s(maskB, tmp, 2);
    cout << "Маска для B: " << tmp << endl;
    _itoa_s(B & maskB, tmp, 2);
    cout << "Очищены биты в B: " << tmp << endl;
    _itoa_s(((A & maskA)|(B & maskB)), tmp, 2);
    cout << "Итоговое число В: " << tmp;
}