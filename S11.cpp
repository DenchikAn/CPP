// Циклически перебрать числа от 0 до 100. Если число делится на 3 вывести его на экран
#include <iostream>
using namespace std;

int main()
{

    setlocale(0, "Rus");
    int b;
    for (b; b != 100; b++)
    if ((b % 3== 0) && (b != 0)) cout << b << endl;

    return 0;
}
