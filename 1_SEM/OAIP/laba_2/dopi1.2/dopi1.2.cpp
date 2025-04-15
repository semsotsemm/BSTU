#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string fileName;

void writeToFile(const string& line)
{
    cout << "Введите название файла: ";
    cin >> fileName;
    FILE* file1;
    if (fopen_s(&file1, fileName.c_str(), "w") != 0 || file1 == nullptr)
    {
        cout << "Ошибка при открытии файла!\n";
        return;
    }
    fprintf(file1, "%s\n", line.c_str());
    cout << "Строка записана в файл " << fileName << "\n";
    fclose(file1);
}

void readLine(string& line)
{
    ifstream file(fileName);
    if (!file)
    {
        cerr << "Ошибка открытия файла\n";
        return;
    }
    getline(file, line);
    cout << "Строка успешно считана\n";
    file.close();
}

void getOddNumbers(string buf) 
{
    int number = 0;
    bool getNumber = false;
    for (int i = buf.length(); i > 0; i--)
    {
        for (int j = i, k = 0; buf[j] >= '0' && buf[j] <= '9' && j > 0; j-- , k++)
        {
            number += (buf[j] - '0') * pow(10, k);
            getNumber = true;
            i = j;
        }
        if (getNumber && number % 2 == 1)
        {
            cout << number << " ";
        }
        getNumber = false;
        number = 0;
    }
}

int main()
{
    setlocale(LC_CTYPE, "Russian");
    cout << "Введите строку: ";
    string line;
    getline(cin, line);
    writeToFile(line);
    string buf;
    readLine(buf);
    int number;
    cout << "Нечетные числа из файла: ";
    getOddNumbers(buf);
}
