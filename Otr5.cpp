// Определите является ли число А простым.

#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Russian");
    int A;
    bool number = true;
    cin >> A;

    if (A < 2){
        number = false;
    }else{
        for (int i = 2; i * i <= A; i++){
            if (A % i == 0){
                number = false; break;
            }
        }
    }
    cout << (number ? "Число простое" : "Число не является простым");

    return 0;
}
