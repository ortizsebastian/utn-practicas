
/*
4) Hacer un programa para que el usuario ingrese un n�mero positivo y que luego se
muestren por pantalla los n�meros entre el 1 y el n�mero ingresado por el usuario.
Ejemplo. Si el usuario ingresa 15, se mostrar�n los n�meros entre el 1 y el 15.
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