/*

20) Se define como divisores propios de un número a aquellos que son sus divisores
excluyendo al número en sí mismo.
Ejemplo: Los divisores propios del 4 son: 1 y 2.
Ejemplo: Los divisores propios del 12 son; 1, 2, 3, 4 y 6.
Se define a un número como perfecto cuando la suma de todos sus divisores propios
coincide con el número en sí mismo.
Ejemplo: 6 es número perfecto pues 1+2+3=6.
Ejemplo: 28 es número perfecto pues 1+2+4+7+14=28.
Ejemplo: 12 no es número perfecto pues 1+2+3+4+6=16.
Hacer un programa para ingresar un número y luego informar con un cartel aclaratorio si el
mismo es un número perfecto o es número no perfecto.

*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
int num, x = 0;

    cout << "Ingrese un numero:" << endl;
    cin >> num;

for(int i=1;i<num;i++)
{
    if(num%i==0)
    {
         x+=i;
    }
}

if(x==num)
 {
     cout << num << " es un numero perfecto." << endl;
 }
 else
 {
     cout << num << " NO es un numero perfecto." << endl;
 }

  system("pause");
  return 0;
}
