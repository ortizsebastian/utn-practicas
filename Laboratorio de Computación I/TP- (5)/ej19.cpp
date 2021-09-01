/*

19) Se define a un número como primo cuando tiene solamente dos divisores.
Ejemplo 1: 2, 7, 11, 13 son números primos, ya que todos tienen solamente dos divisores.
Ejemplo 2: 6 no es primo, pues tiene 4 divisores (1, 2, 3 y 6).
Ejemplo 3: 9 no es primo, pues tiene 3 divisores (1, 3 y 9).
Favor de no confundir número primo con número par. Son dos definiciones diferentes.
Hacer un programa para ingresar un número y luego informar con un cartel aclaratorio si el
mismo es un número primo o es número no primo.

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
       x++;
    }
}

  x = x+1;
  if(x==2)
  {
    cout << "Primo." << endl;
  }
  else
  {
    cout << "NO Primo." << endl;
  }

  system("pause");
  return 0;
}