#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Russian");
    int const maxsize = 100;
    int X[maxsize], n,res=0,maxrand=10,repit=0;
    cout << "Введите размер массива n "; cin >> n;
    srand((unsigned)time(NULL));
    for (int i = 0; i < n; i++)
    {
        *(X + i) = rand() % maxrand;
        cout << *(X + i) << " ";
    }
    for (int i = 0; i < maxrand; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (*(X + j) == i)
            {
                repit++;
            }
        } 
        if (repit==1)
        {
            res++;
        }
        repit = 0;
    }
    cout <<endl<< "Количество различных элементов в массиве: " << res;
}