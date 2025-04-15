#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string fileName;

void writeToFile(const string& line)
{
    cout << "Введите название файла: ";
    cin >> fileName;
    ofstream file(fileName);
    if (!file)
    {
        cout << "Ошибка при открытии файла!\n";
        return;
    }
    file << line << endl;
    cout << "Строка записана в файл " << fileName << "\n";
    file.close();
}

void readLine(string& line) 
{
    ifstream file(fileName);
    if (!file) 
    {
        cout << "Ошибка открытия файла\n";
        return;
    }
    getline(file, line);
    cout << "Строка успешно считана\n";
    file.close();
}

int main() {
    setlocale(LC_CTYPE, "Russian");
    cout << "Введите строку: ";
    string line;
    getline(cin, line);
    writeToFile(line);
    string buf;
    readLine(buf);
    cout << "Слова из файла: ";
    string readedWords;
    for (int i = 0; i < buf.length(); ++i) 
    {
        if (!isdigit(buf[i]))
        {
            if (buf[i] == ' ')
            {
                continue;
            }
            while (i < buf.length() && buf[i] != ' ')
            {
                cout << buf[i];
                readedWords += buf[i];
                ++i;
            }
            readedWords += ' ';
            cout << ' ';
        }
    }
    cout << "\n";
    writeToFile(readedWords);
    return 0;
}
