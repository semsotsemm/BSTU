#include <iostream>
#include<string>
using namespace std;

void summa(string a){
    int sum = 0;
    string num = "0123456789";
        for (int i = 0; i < size(a); i++)
            for (int j = 0; j <= 10; j++)
                if (a[i] == num[j])
                    sum += a[i] - '0';
        cout << sum;
}

int main()
{
    setlocale(LC_CTYPE,"Russian");
    string a;
    cout << "Введите строку: ";
    getline(cin, a);
    summa(a);
}