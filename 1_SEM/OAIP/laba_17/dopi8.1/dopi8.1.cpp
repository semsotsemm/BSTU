#include <iostream>
using namespace std;

int ind(int size,int sumdo,float *A,int sumposle,int *minsum,int min,int mini)
{
    for (int i = 1,p = 0; i < size - 1; i++,p++)
    {
        for (int j = i + 1; j < size; j++)
        {
            int k = i - 1;
            while (k != -1)
            {
                sumdo += A[k];
                k--;
            }
            sumposle += A[j];
        }
        minsum[p] = abs(sumdo - sumposle);
    }
    for (int i = 0; i < size; i++)
    {
        if (minsum[i] > min)
        {
            minsum[i] = min;
            mini = i;
        }
        if (i == 0)
        {
            minsum[i] = min;
            mini = i;
        }
    }
    return mini;
}

int main()
{
    setlocale(LC_CTYPE,"Russian");
    int size,min=0,mini=0;
    float sumdo=0, sumposle=0;
    cout << "Введите длинну массива ";
    cin >> size;
    float* A = new float[size];
    int* minsum = new int[size];
    cout << "Введите элементы массива: \n";
    for (int i = 0; i < size; i++)
    {
        cout << "Введите " << i + 1 << " элемент массива ";
        cin >> A[i];
    }
    cout << "Исходный массив: \n {";
    for (int i = 0; i < size; i++)
    {
        if (A[i] < 0)
            A[i] = A[i] * A[i];
        cout << A[i]<<" ";
    }
    cout << " }";
    mini = ind(size, sumdo, A, sumposle, minsum, min, mini);
    cout << "\nИндекс элемента, для которого сумма элементов, стоящих до него, наименее отличается от суммы элементов, стоящих после него : " << mini+1;
    free(A);
    free(minsum);
}