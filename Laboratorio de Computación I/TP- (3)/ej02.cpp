#include <iostream>
using namespace std;

/*2) Hacer un programa para mostrar por pantalla los n�meros del 1 al 20 salteando de a 3
elementos. Es decir: 1, 4, 7, 10, 13, 16, 19.
Importante: El programa no tiene ning�n ingreso de datos
*/

int main(void){
int i;

 for(i=1; i<=19; i=i+3){
     cout << endl << i;
 }

 return 0;
}
