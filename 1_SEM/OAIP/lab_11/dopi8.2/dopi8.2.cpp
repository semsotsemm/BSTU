#include <iostream>
using namespace std;

int main()
{
    char tmp[33];
    int A, B, n,m, maskA=7,maskB= 7;
    setlocale(LC_CTYPE, "Russian");
    cout << "Введите число A "; cin >> A;
    _itoa_s(A, tmp, 2);
    cout << "A=" << tmp << endl;
    cout << "Введите из какой позиции в числе А хотите извлечь биты n "; cin >> n;
    A = A >> n;
    cout << "Введите число B "; cin >> B;
    _itoa_s(B, tmp, 2);
    cout << "B=" << tmp << endl;
    cout << "Введите на какую позицию в числе B хотите вставить биты m "; cin >> m;
    maskB *= pow(2,m);
    maskB = ~maskB;
    _itoa_s(maskB, tmp, 2);
    cout << "Маска для B: " << tmp << endl;
    _itoa_s(B & maskB, tmp, 2);
    cout << "Очищены биты в B: " << tmp << endl;
    maskA = maskA << m;
    A = A << m;
    _itoa_s(((A & maskA) | (B & maskB)), tmp, 2);
    cout << "Итоговое число В: " << tmp;
}