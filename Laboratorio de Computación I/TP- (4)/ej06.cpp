/*
7) Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un
cero, luego informar el m�ximo.
Ejemplo: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listar� M�ximo 35.
Ejemplo: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listar� M�ximo 55.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n, max=0;

    cin >> n;
    while(n!=0)
    {
        if(max=0)
        {
            max=n;
        }
        else
        {
            if(n>max)
            {
                max=n;
            }
        }
        cin >> n;
    }
    cout << "maximo " << max << endl;

    system("pause");
    return 0;
}