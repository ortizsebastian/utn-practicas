#include <iostream>
using namespace std;

/* 17) Hacer un programa para ingresar por teclado cuatro n�meros. Si los valores que se
ingresaran est�n ordenados en forma creciente, emitir el mensaje �Conjunto Ordenado�, caso
contrario emitir el mensaje: �Conjunto Desordenado�.
Ejemplo 1: si los n�meros que se ingresan son 8,10, 12 y 14, entonces est�n ordenados.
Ejemplo 2: si los n�meros que se ingresan son 8,12, 12 y 14, entonces est�n ordenados.
Ejemplo 3: si los n�meros que se ingresan son 10, 8,12 y 14, entonces est�n desordenados.
*/

int main()
{
    int a, b, c, d;

    cout << "Ingrese cuatro numeros: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    if(a<=b&&b<=c&&c<=d) cout << "Conjunto ordenado." << endl;
    else cout << "Conjunto desordenado." << endl;

    return 0;
}
