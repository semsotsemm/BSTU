#include <iostream>

int main()
{
    using namespace std;
    setlocale(LC_CTYPE, "Russian");
    double y, z, a = 1.774,x=3;
    int m = 5;
    while (x>=3 && x<=5)
    {
        y = pow((a + m * m * x * x),(0.5))/(a+x)*m;
        if (abs(y)<1)
        {
            z = y + 1;
        }
        else if (abs(y)>=1)
        {
            z= sin(y)*sin(y);
        }
        x = x + 0.2;
        cout << "z = " << z<< endl;
    }
}