// Выведите на экран числа от А до В сшагом С.

#include <iostream>

using namespace std;

int main()
{
    double A, B, C;
    cin >> A >> B >> C;
    for ( double i = A; i <=B; i += C){
        cout << i << " ";
    }

    return 0;
}
