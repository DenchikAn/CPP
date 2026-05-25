// S02 (1б) Покажите работу операторов деления нацело и определения остатка от деления
#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "Rus");
    int num1, num2;
    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите второе число: ";
    cin >> num2;

    cout << "Деление нацело: " << num1 / num2 << endl;
    cout << "Остаток от деления: " << num1 % num2 << endl;

    return 0;
}
