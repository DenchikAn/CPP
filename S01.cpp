// S01 (1б) создать 4 переменных разного типа, продемонстрировать работу четырех арифметических операторов на выбор
#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "Rus");
    long num1;
    double num2;
    short num3;
    float num4;

    cout << "Целочисленная переменная (long): ";
    cin >> num1;
    cout << "Вещественная переменная (double): ";
    cin >> num2;
    cout << "Целочисленная переменная (short): ";
    cin >> num3;
    cout << "Вещественная переменная (float): ";
    cin >> num4;

    cout << "\nСложение: " << endl;
    cout << "num1 + num2: "<< num1+num2 <<endl;
    cout << "num2 + num3: "<< num2+num3 <<endl;
    cout << "num3 + num4: "<< num3+num4 <<endl;
    cout << "num4 + num1: "<< num4+num1 <<endl;

    cout << "\nВычитание: " <<endl;
    cout << "num1 - num2: " << num1 - num2 <<endl;
    cout << "num2 - num3: " << num2 - num3 <<endl;
    cout << "num3 - num4: " << num3 - num4 <<endl;
    cout << "num4 - num1: " << num4 - num1 <<endl;

    cout << "\nУмножение: " <<endl;
    cout << "num1 * num2: " << num1 * num2 << endl;
    cout << "num2 * num3: " << num2 * num3 << endl;
    cout << "num3 * num4: " << num3 * num4 << endl;
    cout << "num4 * num1: " << num1 * num2 << endl;

    cout << "\nДеление: " <<endl;
    cout << "num1 / num2: " << num1 / num2 << endl;
    cout << "num2 / num3: " << num2 / num3 << endl;
    cout << "num3 / num4: " << num3 / num4 << endl;
    cout << "num4 / num1: " << num4 / num1 << endl;

    return 0;
}
