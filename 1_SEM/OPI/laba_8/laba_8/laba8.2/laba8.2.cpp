#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int userinput = 0;
    int capitalCode = 0, lowerCode = 0, difference = 0;
    unsigned char symbol = 0;

    do {
        cout << "\nВведите какую операцию хотите выполнить:\n"
            << "1 – определение разницы значений кодов в ASCII буквы в прописном и строчном написании, "
            << "если введен символ латинского алфавита, иначе вывод сообщения об ошибке;\n"
            << "2 – определение разницы значений кодов в Windows - 1251 буквы в прописном и строчном написании, "
            << "если введен символ русского алфавита, иначе вывод сообщения об ошибке;\n"
            << "3 – вывод в консоль кода символа, соответствующего введенной цифре, иначе вывод сообщения об ошибке;\n"
            << "4 – выход из программы." << endl;

        cin >> userinput;

        if (userinput == 3) {
            cout << "Введите цифру: ";
            cin >> symbol;
            capitalCode = symbol;
        }

        if (userinput > 0 && userinput < 3) {
            cout << "Введите строчную букву: ";
            cin >> symbol;
            lowerCode = symbol;

            if ((userinput == 1 && lowerCode >= 'a' && lowerCode <= 'z') || (userinput == 2 && ((lowerCode >= 224 && lowerCode <= 255) || (lowerCode == 184))))
            {
                capitalCode = toupper(lowerCode);
                difference = lowerCode - capitalCode;
            }
            else
            {
                cout << "Ошибка ввода." << endl;
            }
        }

        else
        {
            cout << "Ошибка ввода";
            return 0;
        }

        switch (userinput) {
        case 1:
            if (capitalCode > 64 && capitalCode < 91)
            {
                cout << "Разница кодов прописной и строчной буквы латинского алфавита в ASCII = " << difference;
            }
            else
            {
                cout << "Ошибка ввода.";
            }
            break;
        case 2:
            if ((capitalCode > 191 && capitalCode < 224) || (capitalCode == 168))
            {
                cout << "Разница кодов прописной и строчной буквы русского алфавита в Windows1251 = " << difference;
            }
            else
            {
                cout << "Ошибка ввода.";
            }
            break;
        case 3:
            if (capitalCode > 47 && capitalCode < 58)
            {
                cout << "Код вашего символа " << capitalCode;
            }
            else
            {
                cout << "Ошибка ввода.";
            }
            break;
        case 4:
            cout << "Выход из программы.";
            return 0;
            break;
        default:
            cout << "Некорректный выбор операции." << endl;
            break;
        }
    } while (userinput != 4);

    return 0;
}