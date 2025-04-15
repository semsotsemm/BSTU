#include <iostream>
#include <fstream>

using namespace std;

void copyoddstrok(FILE* file1, ofstream& file2)
{
    char strok[256] = "";
    int i = 0;
    while (true)
    {
        fgets(strok, 256, file1);
        if (feof(file1))
        {
            break;
        }
        i++;
        if (i % 2 == 0)
        {
            file2 << strok;
        }
    }
}

int main()
{
    setlocale(LC_CTYPE, "Russian");
    FILE* file1;
    fopen_s(&file1, "FILE1.txt", "r");
    ofstream file2("FILE2.txt");
    int sizef1, sizef2;
    copyoddstrok(file1, file2);
    file2.close();
    fseek(file1, 0L, SEEK_END);
    sizef1 = ftell(file1);
    fseek(file1, 0L, SEEK_SET);
    fclose(file1);
    cout << "Копирование строк произошло успешно, размер файла1 в байтах(учитывая что 1 символ = 1 байт) = " << sizef1;
    fopen_s(&file1, "FILE2.txt", "r");
    fseek(file1, 0L, SEEK_END);
    sizef2 = ftell(file1);
    fseek(file1, 0L, SEEK_SET);
    fclose(file1);
    cout << ", размер файла2 =" << sizef2;
    return 0;
}