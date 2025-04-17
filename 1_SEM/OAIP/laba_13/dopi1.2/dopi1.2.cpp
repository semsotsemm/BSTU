#include <iostream>
#include <string>
using namespace std;

int main()
{
    string strok;
    char a[200];
    int quant = 0,j=0;
    setlocale(LC_CTYPE, "Russian");
    srand((unsigned)time(NULL));
    cout << "Введите вашу строку: "; getline(cin, strok);
    for (int i = 0; i < size(strok)+1; i++)
    {
        if (strok[i]==' '||size(strok)==i)
        {
            if (i-j==5)
                quant++;
            if (size(strok) != i)
            {
                for (int k = 0; k < size(strok); k++)
                {
                    if (strok[i + 1] == ' ')
                        i++;
                    else
                        break;
                }
                j = i + 1;
            }
        }
    }
    cout << "Групп с пятью символами: " << quant;
}