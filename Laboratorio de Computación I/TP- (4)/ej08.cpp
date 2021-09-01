/*
9) Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un
cero, luego informar el m�ximo y el m�nimo.
Ejemplo: 10, 20, -5, 30,-15, 5, 42, 2, 22, -13, 0. Se listar� M�ximo 42 M�nimo -15.
Ejemplo: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13, 0. Se listar� M�ximo 42 M�nimo 5.
Ejemplo: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13, 0. Se listar� M�ximo -5 M�nimo -42.
Observe que los tres ejemplos dejan en claro que la idea de que el m�ximo
�seguramente� es un positivo y el m�nimo �seguramente� es un negativo, queda
totalmente descartada.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n, max=0, min=0;

    cin >> n;
    while(n!=0)
    {
        if(max==0 && min==0)
        {
            max=n;
            min=n;
        }
        else
        {
            if(n>max)
            {
                max=n;
            }
            else if(n<min)
            {
                min=n;
            }
        }
        cin >> n;
    }

    cout << "maximo: " << max << " minimo: " << min << endl;

    system("pause");
    return 0;
}