#include <iostream>
using namespace std;

/* 16) Hacer un programa para ingresar por teclado las cuatro notas de los ex�menes obtenidas
por un alumno y luego emitir uno solo de los cartel de acuerdo a las siguientes condiciones:
- �Promociona�, si obtuvo en los cuatro ex�menes nota 7 o m�s.
- �Rinde examen final�, si obtuvo nota 4 o m�s en por lo menos tres ex�menes.
- �Recupera Parciales�, si obtuvo nota 4 o m�s en por lo menos uno de los ex�menes.
- �Recursa la materia�, si no aprob� ning�n examen parcial.
*/

int main()
{
    int a, b, c, d;

    cout << "Ingrese sus cuatro notas: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    if(a>=4||b>=4||c>=4||d>=4){
        if(a>=7&&b>=7&&c>=7&&d>=7) cout << "Promociona." << endl;

         else if(a>=4&&b>=4&&c>=4) cout << "Rinde examen final." << endl;

         else if(b>=4&&c>=4&&d>=4) cout << "Rinde examen final." << endl;

         else if(a>=4&&c>=4&&d>=4) cout << "Rinde examen final." << endl;

         else cout << "Recupera parciales." << endl;
        }
    else cout << "Recursa la materia." << endl;

    return 0;
}
