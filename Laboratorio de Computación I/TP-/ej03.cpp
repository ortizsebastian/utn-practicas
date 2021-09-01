#include<iostream>

using namespace std;

int main()
{
    int sueldof, comision, cantv;
    cout << "Ingrese la cantidad de autos vendidos: " << endl;
    cin >> cantv;
    comision = 2000 * cantv;
    sueldof =  15000 + comision;
    cout << "Su sueldo final es de: " << sueldof << endl;

    return 0;
}
