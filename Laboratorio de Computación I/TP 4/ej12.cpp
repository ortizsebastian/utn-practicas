/*
13) Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un
cero, informar si todos están ordenados en forma creciente. En caso de haber dos números
“empatados” considerarlos como crecientes. Por ejemplo si la lista fuera:
Ejemplo 1: -10, 1, 5, 7, 15, 18, 20, 23, 0 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 2: 10, 10, 15, 20, 25, 25, 28, 33, 0 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 3: 10, 1, 15, 7, -15, 18, 20, 23, 0 se emitirá un cartel: “Conjunto No Ordenado”
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n,x=0;
    bool ordenado=true;

    cin >> n;
    while(n!=0)
    {
        if(x==0)
        {
            x=n;
        }
        else if(n>x)
        {
            x=n;
        }
        else
        {
            ordenado=false;
        }
        cin >> n;
    }
    if(ordenado==true)
    {
        cout << "conjunto ordenado" << endl;
    }
    else
    {
        cout << "conjunto no ordenado" << endl;
    }

    system("pause");
    return 0;
}