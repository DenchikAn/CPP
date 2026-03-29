// Циклически пользователь вводит числа и на экран выводится их сумма. Цикл прерывается, если сумма кратна 10.

#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Russian");
    int num, sum = 0;
do {
    cout << "Введите число: ";
    cin >> num;
    sum += num;
    cout << "Текущая сумма: " << sum << endl;
    }
    while (sum == 0 || sum % 10 != 0);

    return 0;
}
