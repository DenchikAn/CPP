//S41 (1б) Напишите функцию squared_sum(), которая принимает два дробных числа и возвращает квадрат их суммы.
#include <iostream>
using namespace std;

float squared_sum(float a, float b)
{
    float sum = a + b;
    float squred = sum * sum;
    return squred;
}


int main()
{
    setlocale(0, "Rus");
    float num1, num2;
    cout << "Введите число 1: ";
    cin >> num1;
    cout << "Введите число 2: ";
    cin >> num2;

    cout << squared_sum(num1, num2)<< endl;



    return 0;
}
