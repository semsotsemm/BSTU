#include <iostream>

using namespace std;

bool polcheck(const int strok, const int colum, double **A, int& otrcol, int& otrstr) //Функция проверяет есть ли в матрице отрицательный элемент
{
    for (int i = 0; i < strok; i++, otrstr++)
    {
        for (int j = 0; j < colum; j++, otrcol++)
        {
            if (*(*(A + i) + j) < 0)
            {
                return true;
            }
        }
    }
    return false;
}

void chengearr(const int strok, const int colum, double** A, const int otrcol, const int otrstr) //Функция уменьшить элементы найденного столбца вдвое.
{
    for (int i = otrstr; i < strok; i++)
    {
        for (int j = otrcol; j < otrcol + 1; j++)
        {
            *(*(A + i) + j) /= 2;
        }
    }
}

void showarr(const int strok, const int colum, double** A) //Функия выводит матрицу
{
    for (int i = 0; i < strok; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            cout << *(*(A + i) + j) << "\t";
        }
        cout << endl;
    }
}

int main()
{
    setlocale(LC_CTYPE, "Russian");
    int strok, colum,otrcol = 0,otrstr = 0;
    cout << "Введите количество строк: ";
    cin >> strok;
    cout << "Введите количество колонок: ";
    cin >> colum;
    double** A = new double*[strok];
    for (int i = 0; i < strok; i++)
    {
        *(A + i) = new double[colum]; //Создаем двумерный массив 
    }
    for (int i = 0; i < strok; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            *(*(A + i) + j) = rand() % 20 - 1; // заполняем двумерный массив случайными элементами
        }
    }
    showarr(strok, colum, A);
    if (polcheck(strok, colum, A, otrcol, otrstr))
    {
        cout << "\n\nВ мтарице есть столбец с отрицательным элементом номер элемента [" << otrcol + 1 << ";" << otrstr + 1 << "],\n";
        cout << "Измененный массив:\n";
        chengearr(strok, colum, A, otrcol, otrstr);
        showarr(strok, colum, A);
    }
    else 
    {
        cout << "В матрице нет ни одного столбца с отрицательным элементом";
    }
    for (int i = 0; i < strok; i++) 
        delete A[i];
    delete[] A; //очистка дин. памяти
    return 0;
}