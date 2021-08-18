#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    int n1, n2, resultado;
    cout << "Ingrese el pago por hora del empleado: " << endl;
    cin >> n1;
    cout << "Ingrese la cantidad de horas trabajadas: " << endl;
    cin >> n2;
    resultado = n1 * n2;
    cout << "El sueldo es: " << resultado;

    return 0;
}
