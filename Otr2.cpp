// Используя switch реализуйте калькулятор.

#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Russian");
    char op;
    double num1, num2;
    cout << "Введите пример: ";
    cin >> num1 >> op >> num2;
    switch(op) {
        case '+': cout << "Результат: " <<num1 + num2; break;
        case '-': cout << "Результат: " <<num1 - num2; break;
        case '*': cout << "Результат: " <<num1 * num2; break;
        case '/':
            if (num2 != 0){
                cout << "Результат: " <<num1 / num2;
            }else{
                cout << "На ноль делить нельзя!";
            }break;
        default: cout << "Неверная операция";
    }

    return 0;
}
