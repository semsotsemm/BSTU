#include <iostream>

int main()
{
    setlocale(LC_CTYPE, "Russian");
    using namespace std;
    int n;
    cout << "Введите номер месяца ";
    cin >> n;
    if (n < 13 || n > 0) {
        if (n < 3 || n == 12)
        {
            cout << "Зима";
        }
        if (n < 6 && n > 2)
        {
            cout << "Весна";
        }
        if (n < 9 && n > 5)
        {
            cout << "Лето";
        }
        if (n < 12 && n > 8)
        {
            cout << "Осень";
        }
    }
    else {
        cout << "Месяц введен неверно";
    }
}