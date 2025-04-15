#include <iostream>
#include <iomanip>

int main()
{
    setlocale(LC_CTYPE, "Russian");
    using namespace std;

    char c, probel = ' ';
    int width1, width2, width3;

    cout << "Введите символ: ";
    cin >> c;

    cout << "Введите ширину первой строки: ";
    cin >> width1;

    cout << "Введите ширину второй строки: ";
    cin >> width2;

    cout << "Введите ширину третьей строки: ";
    cin >> width3;

    cout << setw(35) << setfill(probel) << probel;
    cout << setw(width1) << setfill(c) << c << endl;

    cout << setw(34) << setfill(probel) << probel;
    cout << setw(width2) << setfill(c) << c << endl;

    cout << setw(33) << setfill(probel) << probel;
    cout << setw(width3) << setfill(c) << c << endl;

    return 0;
}