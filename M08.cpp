//M08 (3б) ‘ункци€ get_angle() принимает три числа - длины трех сторон треугольника и возвращает значение угла (в градусах),
//расположенного напротив первой стороны. –азрешено использовать обратные тригонометрические функции из библиотеки math.h.
//¬ведите проверку на корректность значений аргументов (>0).
#include <iostream>
#include <math.h>
using namespace std;

float get_angle(float A, float B, float C)
{
    if (A <= 0 || B <= 0 || C <= 0){
        cout << "Ќј 0 ƒ≈Ћ»“№ Ќ≈Ћ№«я" << endl;
    }else{
        float const PI = 3.14159;
        float gradus;
        float COSA = (B*B + C*C - A*A)/(2*A*B);
        gradus = acos(COSA) * 180/PI;

        return gradus;
        }
}

int main()
{
    setlocale(0, "Rus");
    float a, b, c;
    cout << "¬ведите 3 стороны треугольника: " << endl;
    cin >> a >> b >> c;
    cout << get_angle(a,b,c) << endl;
    cout << get_angle(5,4,3) << endl;

    return 0;
}
