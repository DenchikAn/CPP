//Используя другой тип цикла, перебрать числа от 1 до 1000 с шагом 4. Найти сумму всех чисел,которые делятся на 7 без остатка
#include <iostream>
using namespace std;

int main()
{
    int a, sum;
    a = 0;
    while (a < 1000) {
        a += 4;
        if (a % 7 == 0) {
            sum += a;
            cout << sum << endl;
        }
    }

    return 0;
}
