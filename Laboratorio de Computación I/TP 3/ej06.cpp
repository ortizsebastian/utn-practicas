#include <iostream>
using namespace std;

/*6) Hacer un programa para ingresar un N valor que indica la cantidad de números que
componen una lista y luego solicitar se ingresen esos N números. Se pide informar cuantos
son positivos.
Ejemplo: Se ingresa como valor N un 5, y luego se ingresa: 10, -3, 2, 5, 4. Se listará
Cantidad de Positivos: 4
Ejemplo: Se ingresa como valor N un 6, y luego se ingresa: -10, -3, -2, 0, -5, -4. Se listará
Cantidad de Positivos: 0
*/

int main(){
    int x, y, acum=0;

    cout << "Ingrese la cantidad de numeros de su lista: " << endl;
    cin >> x;

    for(int i=0; i<x; i++){
        cout << "Ingrese los numeros de su lista: " << endl;
        cin >> y;
        if(y>0) acum++;
    }
    cout << "Cantidad de positivos: " << acum << endl;

 return 0;
}
