#include <iostream>
using namespace std;

/*9) Hacer un programa para ingresar una lista de 10 n�meros, luego informar el m�ximo y
la posici�n del m�ximo en la lista. En caso de �empates� considerar la primera aparici�n.
Ejemplo: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20. Se listar� M�ximo 35 Posici�n 7.
Ejemplo: 5, -10, 20, 8, 25, 13, 55, -8, 55, 20. Se listar� M�ximo 55 Posici�n 7.
*/

int main()
{
    int x, num=0, pos=0, pos2=0;

    for(int i=0; i<10; i++){
        cout << "Ingrese numero: " << endl;
        cin >> x;

        pos++;
        if(x>num){
            num = x;
            pos2 = pos;
        }
    }
    cout << "Maximo: " << num << " Posicion: " << pos2 << endl;
    return 0;
}
