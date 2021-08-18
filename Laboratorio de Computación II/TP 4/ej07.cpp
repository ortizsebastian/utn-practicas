/*
8) Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un
cero, luego informar el máximo y la posición del máximo en la lista. En caso de “empates”
considerar la primera aparición.
Ejemplo: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listará Máximo 35 Posición 7.
Ejemplo: 5, -10, 20, 8, 25, 13, 55, -8, 55, 20, 0. Se listará Máximo 55 Posición 7.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n, pos, cont=0, numMax=0;

    cin >> n;

    while(n!=0)
    {
        cont++;
        if(numMax==0)
        {
            numMax=n;
            pos=cont;
        }
        else if(n>numMax)
        {
            numMax=n;
            pos=cont;
        }
        cin >> n;
    }
    cout << "maximo " << numMax << " posicion " << pos << endl;

    system("pause");
    return 0;
}