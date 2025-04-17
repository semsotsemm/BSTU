#include <iostream>
using namespace std;

int *chet(int* A, int* B, int size) 
{
    for (int i = 0; i < size; i++)
    {
        cout << "Введите " << i + 1 << " элемент массива ";
        cin >> *(A + i);
        if (*(A + i) % 2 == 0 && (i + 1) % 2 != 0)
            *(B + i) = i + 1;
    }
    return B;
}

int main()
{
    int size,col;
    setlocale(LC_CTYPE,"Russian");
    cout << "Введите количество элементов массива: ";
    cin >> size;
    int* A = new int[size];
    int* B = new int[size];
    for (int i = 0; i < size; i++)
        *(B + i) = 0;
    chet(A,B,size);
    cout << "Номера четных элементов, стоящих на нечетных местах: "<<endl;
    for (int i = 0; i < size; i++) 
        if (*(B + i) != 0)
            cout << B[i]<<" ";
    free(A);
    free(B);
}