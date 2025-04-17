#include <iostream>
using namespace std;
int* rep(int strok, int colum, int** A, int max, int* repi, int* repj)
{
    for (int i = 0; i < strok; i++)
        for (int j = 0; j < colum; j++)
            if (max == A[i][j])
            {
                repi[j] = i + 1;
                repj[j] = j + 1;
            }
    return repi, repj;
}

int maxcol(int strok, int colum, int** A, int max, int repeat)
{
    for (int i = 0; i < strok; i++)
        for (int j = 0; j < colum; j++)
            if (max == A[i][j])
                repeat++;
    return repeat;
}

int main()
{
    int strok, colum,max=0,repeat=0;
    setlocale(LC_CTYPE,"Russian");
    cout << "Введите количество строк матрицы: ";
    cin >> strok;
    cout << "Введите количество колонок матрицы: ";
    cin >> colum;
    int* repi = new int[strok * colum];
    int* repj = new int[strok * colum];
    int** A = new int* [strok];
    for (int i = 0; i < strok; i++)
        A[i] = new int[colum];
    for (int i = 0; i < strok * colum; i++)
    {
        repi[i] = 0;
        repj[i] = 0;
    }
    for (int i = 0; i < strok; i++)
        for (int j = 0; j < colum; j++)
        {
            cout << "Введите элемент массива [" << i + 1 << " " << j + 1 << "]";
            cin >> A[i][j];
            if (max < A[i][j])
                max = A[i][j];
        }

    repeat = maxcol(strok, colum, A, max, repeat);
    rep(strok, colum, A, max, repi, repj);
    cout << "Максимальный элемент матрицы: " << max << ",\nКоличество повторений данного элемента:" << repeat << ",\nПозиции максимальных элементов: "; 
    for (int i = 0; i < strok*colum; i++)
        if (repi[i] != 0 || repj[i] != 0)
            cout << " [" << repi[i]<< " " << repj[i] << "]";
    free(repi);
    free(repj);
    for (int i = 0; i < strok; i++)
        delete A[i];
    delete[] A;
}