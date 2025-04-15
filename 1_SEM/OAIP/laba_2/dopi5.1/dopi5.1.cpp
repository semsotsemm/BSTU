#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void copyLines() 
{
    ifstream file1("FILE1.txt");
    ofstream file2("FILE2.txt");

    if (!file1 || !file2) 
    {
        cout << "Ошибка открытия файлов!" << endl;
        return;
    }

    string line;
    for (int i = 0; i < 3; ++i) 
    {
        getline(file1, line);
    }

    while (getline(file1, line))
    {
        file2 << line << endl;
    }

    file1.close();
    file2.close();
    cout << "Строки из FILE1.txt успешно скопированы в FILE2.txt\n";
}

int countSymbol() 
{
    ifstream file2("FILE2.txt");
    if (!file2) 
    {
        cout << "Ошибка открытия файла FILE2.txt!" << endl;
        return 0;
    }

    string lastLine, line;
    while (getline(file2, line)) 
    {
        lastLine = line;
    }

    file2.close();

    int lastSpace = lastLine.find_last_of(' ');
    string lastWord = lastLine.substr(lastSpace + 1);
    return lastWord.length();
}

int main()
{
    setlocale(LC_CTYPE, "Russian");
    copyLines();
    cout << "Количество символов в последнем слове FILE2.txt: " << countSymbol() << endl;
    return 0;
}