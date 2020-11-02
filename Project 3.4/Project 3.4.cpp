// Lab_03_4.cpp
// < Ореста Якиміва >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 27
#include <iostream>
using namespace std;

int main()
{
    double x; // вхідний аргумент
    double y; // вхідний параметр
    double R; // вхідний параметр

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    // розгалуження в повній формі

    if ((y <= (sqrt((R * R) - (x + R) * (x + R))) + R) ||
        (y <= 0 && y >= -R && x >= 0 && x <= 2 * R))
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    cin.get();
    system("pause");
    return 0;
}