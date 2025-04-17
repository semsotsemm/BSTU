#include <iostream>

int main()
{
    int j;
    char fam [] = "АНТИП";
    char fam1[] = "антип";
    using namespace std;
    setlocale(LC_CTYPE , "Russian");
    for (int i = 0; i < 5; i++)
    {
        j = fam1[i] - fam[i];
        cout << "Разница между строчным и прописным написанием " << i+1 << " буквы фамилии = " << j << " " << endl;
    }
}