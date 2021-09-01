/*

17) Hacer un programa para ingresar un número y luego informar todos los divisores pares
de ese número.
Ejemplo 1. Si se ingresa 6 se listarán: 2 y 6
Ejemplo 2. Si se ingresa 8 se listarán: 2, 4 y 8.
Ejemplo 3. Si se ingresa 11 no se listará nada

*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()

{
int num;

    cout << "Ingrese un numero" << endl;
    cin >> num;

for(int i=1;i<num;i++)
{
    if(num%i==0)
    {
        if(i%2==0)
        {
            cout << i << " es divisor par de " << num << endl;
        }
    }
}

  if(num%2==0) cout << num << " es divisor par de " << num << endl;

  system("pause");
  return 0;
}
