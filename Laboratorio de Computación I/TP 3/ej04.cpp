#include <iostream>
using namespace std;

/*4) Hacer un programa para que el usuario ingrese un n�mero positivo y que luego se
muestren por pantalla los n�meros entre el 1 y el n�mero ingresado por el usuario.
Ejemplo. Si el usuario ingresa 15, se mostrar�n los n�meros entre el 1 y el 15.
*/


int main()
{
    int x;
    cout << "Ingrese un numero: " << endl;
    cin >> x;

    for (int i=1; i<=x; i++){
        cout << endl << i;
    }

    return 0;
}
