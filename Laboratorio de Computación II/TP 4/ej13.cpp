/*
14) Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un
cero, informar los 2 mayores valores ingresados, aclarando cual es el máximo y cual el que
le sigue.
Ejemplo: 10, 8, 12, 14, 3, 0 el resultado será 14 y 12.
Ejemplo: 14, 8, 12, 14, 3, 0 el resultado será 14 y 14.
Ejemplo: -4, -8, -12, -20, -2, 0 el resultado será -2 y -4
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n,primerMax=0,segundoMax=0;

    cin >> n;
    while(n!=0)
    {
        if(primerMax==0)
        {
            primerMax=n;
        }
        else if(n>=primerMax)
        {
            segundoMax=primerMax;
            primerMax=n;
        }
        else if(segundoMax==0)
        {
            segundoMax=n;
        }
        else if(n>=segundoMax && n<=primerMax)
        {
            segundoMax=n;
        }

        cin >> n;
    }

    cout << "primer maximo " << primerMax << " segundo maximo " << segundoMax << endl;
    system("pause");
    return 0;
}