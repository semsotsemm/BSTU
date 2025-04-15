	#include <iostream>

int main()
{
	double v1, v2, v3, v4, v5,vsr;
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	cout << "Введите среднюю скорость автомобиля на 1 участке пути" << endl;
	cout << "V1 = "; cin >> v1;
	cout << "Введите среднюю скорость автомобиля на 2 участке пути" << endl;
	cout << "V2 = "; cin >> v2;
	cout << "Введите среднюю скорость автомобиля на 3 участке пути" << endl;
	cout << "V3 = "; cin >> v3;
	cout << "Введите среднюю скорость автомобиля на 4 участке пути" << endl;
	cout << "V4 = "; cin >> v4;
	cout << "Введите среднюю скорость автомобиля на 5 участке пути" << endl;
	cout << "V5 = "; cin >> v5;
	vsr = (v1 + v2 + v3 + v4 + v5)/5;
	cout << "Средняя скорость = " << vsr;
}