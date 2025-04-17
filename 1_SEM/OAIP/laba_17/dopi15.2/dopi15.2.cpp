#include <iostream>
using namespace std;

int polcheck(int colum, int strok,int **A,int col,int povtor) 
{
    for (int i = 0; i < colum; i++)
    {
        for (int j = 0; j < strok; j++)
            if (A[j][i] > 0)
                col++;
        if (col == 0)
        {
            for (int j = 0; j < strok; j++)
                A[j][i] = abs(A[j][i]);
            break;
        }
        else
            povtor++;
        col = 0;
    }
    return povtor;
}

int main()
{
    int strok, colum,col=0,povtor=0;
    setlocale(LC_CTYPE,"Russian");
    cout << "Введите количество строк матрицы: ";
    cin >> strok;
    cout << "Введите количество колонок матрицы: ";
    cin >> colum;
    int** A = new int* [strok];
    for (int i = 0; i < strok; i++)
        A[i] = new int[colum];
    for (int i = 0; i < strok; i++)
        for (int j = 0; j < colum; j++)
        {
            cout << "Введите элемент массива [" << i + 1 << " " << j + 1 << "]";
            cin >> A[i][j];
        }
    povtor = polcheck(colum, strok, A, col, povtor);
    if (povtor==colum)
        cout << "Все столбцы матрицы содержат хотя бы один положительный элемент";
    else
        for (int i = 0; i < strok; i++)
        {
            cout << endl;
            for (int j = 0; j < colum; j++)
                cout << A[i][j] << "\t";
        }
}