#include <iostream>
using namespace std;

/* 15) Un a�o es bisiesto si es m�ltiplo de 4, exceptuando a los a�os que son m�ltiplos de 100
pero que no sean m�ltiplos de 400. Esto �ltimo significa que el a�o 1900 no es bisiesto, pero
el a�o 2000 si lo es.
Hacer un programa para que ingresar un a�o y listar por pantalla si es bisiesto o no lo es.
Ejemplo 1. Si se ingresa el a�o 2020 se indicar� como bisiesto.
Ejemplo 2. Si se ingresa el a�o 2019 se indicar� como no bisiesto.
Ejemplo 3. Si se ingresa el a�o 1800 o 1900 se indicar� como no bisiesto.
Ejemplo 4. Si se ingresa el a�o 1600 o 2000 se indicar� como bisiesto.*
*/

int main()
{
    int x;

    cout << "Ingrese fecha un a�o:" << endl;
    cin >> x;

    if(x%4 == 0 && x%100 != 0 || x%400 == 0)
    {
    cout << "Es bisiesto." << endl;
    }
    else
    {
    cout << "No es bisiesto." << endl;
    }


    return 0;
}
