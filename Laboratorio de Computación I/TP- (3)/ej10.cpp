#include <iostream>
using namespace std;

/*
10) Hacer un programa para ingresar una lista de 10 n�meros, luego informar el m�ximo y
el m�nimo.
Ejemplo: 10, 20, -5, 30,-15, 5, 42, 0, 22, -13. Se listar� M�ximo 42 M�nimo -15.
Ejemplo: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13. Se listar� M�ximo 42 M�nimo 5.
Ejemplo: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13. Se listar� M�ximo -5 M�nimo -42.
*/

int main()
{
  int num, _max, _min;

    for(int i=0; i<4; i++){
        cout << "Ingrese un numero: ";
        cin >> num;

        if(i == 0)
        {
            _max = num;
            _min = num;
        }
        else if(i != 0)
        {
            if(num>_max) _max = num;
            else if(num<_min) _min = num;
        }
    }
    cout << "Maximo: " << _max << " Minimo: " << _min << endl;
    return 0;
}
