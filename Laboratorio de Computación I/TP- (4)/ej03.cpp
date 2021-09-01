
/*
4) Hacer un programa para que el usuario ingrese un número positivo y que luego se
muestren por pantalla los números entre el 1 y el número ingresado por el usuario.
Ejemplo. Si el usuario ingresa 15, se mostrarán los números entre el 1 y el 15.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int c=1, n;
    cin >> n;

    while(c<n)
    {
        cout << c << endl;
        c=c+1;
    }

    system("pause");
    return 0;
}