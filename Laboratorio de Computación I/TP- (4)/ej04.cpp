
/*
5) Hacer un programa para que el usuario ingrese dos números y luego el programa
muestre por pantalla los números entre el menor y el mayor de ambos.
Ejemplo, si el usuario ingresa 3 y 15, se mostrarán los números entre el 3 y el 15; y si el
usuario ingresa 25 y 8, se mostrarán los números entre el 8 y el 25.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n, n2, max, min;
    cin >> n;
    cin >> n2;

    if(n>n2)
    {
        max=n;
        min=n2;
    }
    else
    {
        max=n2;
        min=n;
    }

    min = min-1;

    while(min<max)
    {
        cout << min << endl;
        min=min+1;
    }

    system("pause");
    return 0;
}