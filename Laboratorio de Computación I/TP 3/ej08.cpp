#include <iostream>
using namespace std;

/*8) Hacer un programa para ingresar una lista de 10 n�meros, luego informar el m�ximo.
Ejemplo: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20. Se listar� M�ximo 35.
Ejemplo: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20. Se listar� M�ximo 55.
*/

int main()
{
    int x, y=0;

    for(int i=0; i<10; i++){
        cout << "Ingrese numero: " << endl;
        cin >> x;
        if(x>y) y = x;
    }
    cout << "Maximo: " << y << endl;

    return 0;
}
