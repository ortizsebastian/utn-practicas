#include <iostream>
using namespace std;

/*5) Hacer un programa para que el usuario ingrese dos números y luego el programa
muestre por pantalla los números entre el menor y el mayor de ambos.
Ejemplo, si el usuario ingresa 3 y 15, se mostrarán los números entre el 3 y el 15; y si el
usuario ingresa 25 y 8, se mostrarán los números entre el 8 y el 25.
*/


int main()
{
    int x, y, mayor, menor;
    cout << "Ingrese un numero: " << endl;
    cin >> x;
    cout << endl << "Ingrese otro numero: " << endl;
    cin >> y;

    if(x>y){
        mayor=x;
        menor=y;
    }
    else{
        mayor=y;
        menor=x;
    }

    for (int i=menor-1; i<=mayor-1; i++){
        cout << endl << i;
    }

 return 0;
}
