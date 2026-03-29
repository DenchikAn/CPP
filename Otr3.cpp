// Рассчитайте величину А! для введенного целого А.

#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Russian");
    int A;
    long long AA = 1;
    cout << "Введите число: ";
    cin >> A;
    for (int i = 1; i <= A; ++i){
        AA *= i;
    }
    cout << "Факториал: " << AA << endl;

    return 0;
}
