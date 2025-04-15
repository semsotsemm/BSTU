#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool countLines(int k, int& numberOfLines) 
{
    ifstream file1("FILE1.txt");
    if (!file1) 
    {
        cout << "Ошибка открытия файла FILE1.txt\n";
        return false;
    }
    string line;
    while (getline(file1, line)) 
    {
        numberOfLines++;
    }
    file1.close();
    return (numberOfLines > k + 3);
}

void copyLines(int k) 
{
    int numberOfLines = 0;
    if (countLines(k, numberOfLines))
    {
        ifstream file1("FILE1.txt");
        ofstream file2("FILE2.txt");
        if (!file1 || !file2) 
        {
            cout << "Ошибка открытия файлов для копирования\n";
            return;
        }
        string line;
        for (int i = 0; i < k - 1; i++) 
        {
            getline(file1, line);
        }
        for (int i = 0; i < 3; i++)
        {
            if (getline(file1, line))
            {
                file2 << line << endl;
            }
        }
        cout << "Строки успешно скопированы\n";
        file1.close();
        file2.close();
    }
    else 
    {
        cout << "В файле FILE1.txt недостаточно строк\n";
    }
}

int main() 
{
    int k;
    setlocale(LC_CTYPE, "Russian");
    cout << "Введите k: ";
    cin >> k;
    copyLines(k);
    return 0;
}
