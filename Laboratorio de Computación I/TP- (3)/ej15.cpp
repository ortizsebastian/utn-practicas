/*

15) Hacer un programa para ingresar 5 números, luego informar los 2 mayores valores
ingresados, aclarando cual es el máximo y cual el que le sigue.
Ejemplo: 10, 8, 12, 14, 3 el resultado será 14 y 12.
Ejemplo: 14, 8, 12, 14 ,3 el resultado será 14 y 14.
Ejemplo: -4, -8, -12, -20, -2 el resultado será -2 y -4

*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()

{
int num, Max1, Max2;

for(int i=0;i<5;i++)

{
    cout << "Ingrese un numero" << endl;
    cin >> num;

    if(i==0)
    {
        Max1 = num;
        Max2 = num;
    }
    else
    {
        if(Max1>num)
        {
            Max2 = num;
        }
        else
        {
            Max2 = Max1;
            Max1 = num;
        }
    }
}
    cout << "Primer MAX: " << Max1 << " Segundo MAX: " << Max2 << endl;

  system("pause");
  return 0;
}
