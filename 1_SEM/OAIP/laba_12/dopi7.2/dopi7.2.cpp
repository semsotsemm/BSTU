#include <iostream>
using namespace std;

int main()
{
    const int maxsize = 100;
    setlocale(LC_CTYPE, "Russian");
    int N=257486, k, n, size = 0, N1, crat[maxsize], j = 0;
    cout << "N= " << N<<endl;
    N1 = N;
    cout << "Введите целое число m "; cin >> k;
    while (N1 != 0)
    {
        size++;
        N1 /= 10;
    }
    for (int i = 0; i < size; i++)
    {
        n = N % 10;
        if (n % k == 0)
        {
            *(crat + j) = n;
            j++;
        }
        N /= 10;
    }
    for (int i = 0; i < j; i++)
    {
        cout << *(crat + i) << " ";
    }
}