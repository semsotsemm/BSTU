#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Russian");
    int const maxsize = 100;
    int k=0, n=0, A[maxsize],j=0;
    cout << "Введите размер массива А ";cin>> n;
    cout << "Введите число k ";cin>> k;
    srand((unsigned)time(NULL));
    cout << "Массив А: ";
    for (int i = 0; i < n; i++)
    {
        *(A + i) = rand() % 10;
        cout << *(A + i)<<" ";
    }
    cout <<endl<< "Номера элементов которые равны k: ";
    for (int i = 0; i < n; i++)
    {
        if (k == *(A + i))
        {
            cout << i << " ";
        }
    }
    cout <<endl<< "Номера элементов больше k: ";
    for (int i = 0; i < n; i++)
    {
        if (k > *(A + i))
        {
            cout << i << " ";
        }
    }
    cout <<endl<< "Номера элементов меньше k: ";
    for (int i = 0; i < n; i++)
    {
        if (k < *(A + i))
        {
            cout << i << " ";
        }
    }
}