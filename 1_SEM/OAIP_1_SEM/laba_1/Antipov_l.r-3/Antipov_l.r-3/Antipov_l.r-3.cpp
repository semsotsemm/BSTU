#include <iostream>

int main()
{
    int a, b, c, n = 0;
    setlocale(LC_CTYPE, "Russian");
    std::cout << "Введите A,B,C" << std::endl;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    if (a % 2 != 0)
    {
        n++;
    }
    if (b % 2 != 0)
    {
        n++;
    }
    if (c % 2 != 0)
    {
        n++;
    }
    if (n >= 2) {
        std::cout << "Количество четных чисел <=2";
    }
    else
    {
        std::cout << "Количество четных чисел >=2";
    }

    //вар4
}