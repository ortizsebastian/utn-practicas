
/*
3) Hacer un programa para mostrar por pantalla los n�meros del 20 al 1 en orden
decreciente.
Importante: El programa no tiene ning�n ingreso de datos.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int c=20;

    while(c>0)
    {
        cout << c << endl;
        c=c-1;
    }

    system("pause");
    return 0;
}