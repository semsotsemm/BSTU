#include <iostream>

int main()
{
    setlocale(LC_CTYPE,"Russian");
    int x, y, z, n;
    std::cout << "Введите x,y,z" << std::endl;
    std::cin >> x;
    std::cin >> y;
    std::cin >> z;
    if (x < y) {
        n = x;
        x = y;
        y = n;
    }
    if (x < z) {
        n = x;
        x = z;
        z = n;
    }
    if (y < z) {
        n = y;
        y = z;
        z = n;
    }
    std::cout << x << y << z << std::endl;
//вар1
}