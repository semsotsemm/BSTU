#include <iostream>
#include <string>
int main()
{
    using namespace std;
    setlocale(LC_CTYPE, "Russian");
    string a = "100";
    int b = stoi(a);
    while (b<999)
    {
        a = to_string(b);
        if (a[0] != a[1] && a[1] != a[2] && a[2] != a[0])
        {
            cout << a << "\t";

        }
        b++;
    }
}