#include <iostream>
using namespace std;
int** mult(int** A, int** B, int** C,int size )
{
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
        {
            for (int k =0; k < size; k++)
                *(*(C + i) + j) += *(*(A + i) + k) * *(*(B + k) + j);
        }
    return C;
}

int main()
{
    int size,otr=0;
    setlocale(LC_CTYPE,"Russian");
    cout << "Введите размеры матриц ";
    cin >> size;
    int** A = new int* [size], ** B = new int* [size], ** C = new int* [size];
    for (int i = 0; i < size; i++) 
    {
        A[i] = new int[size];
        B[i] = new int[size];
        C[i] = new int[size];
    }
    cout << "Введите матрицы A и B"<<endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "Введите элемент матрицы A [" << i+1 << " " << j+1 << "]";
            cin >> A[i][j];
            C[i][j] = 0;
            if (A[i][j]<0)
                otr = 1;
        }
        for (int j = 0; j < size; j++)
        {
            cout << "Введите элемент матрицы B [" << i+1 << " " << j+1 << "]";
            cin >> B[i][j]; 
            if (B[i][j] < 0)
                otr = 1;
        }
    }
    mult(A,B,C,size);
    if (otr==0)
        for (int i = 0; i < size; i++)
        {
            cout << endl;
            cout << "|";
            for (int j = 0; j < size; j++)
                cout << A[i][j] << "\t";
            cout << "|";
            if (i == 1)
                cout << "x";
            cout << "\t|";
            for (int j = 0; j < size; j++)
                cout << B[i][j] << "\t";
            cout << "|";
            if (i == 1)
                cout << "=";
            cout << "\t|";
            for (int j = 0; j < size; j++)
                cout << C[i][j] << "\t";
            cout << "|";
        }
    else 
        cout << "В матрице есть отрицательный элемент";
        for (int i = 0; i < size; i++) 
        {
            delete A[i];
            delete B[i];
            delete C[i];
        }
    delete[] A;
    delete[] B;
    delete[] C;
}