/*

12) Dada una lista de 7 números informar cual es el primer y segundo número impar
ingresado.
Ejemplo 8, 4, 5, 6, -9, 5,7 se informa 5 y -9.

*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

int num, imp1 = 0, imp2 = 0;

for(int i=0;i<7;i++)

{
    cout << "Ingrese un numero: " << endl;
    cin >> num;

    if(num%2!=0 && imp1==0)
    {
        imp1 = num;
    }
    else if(num%2!=0 && imp2==0)
    {
        imp2 = num;
    }
}

    cout << "Primer impar: " << imp1 << endl;
    cout << "Segundo impar: " << imp2 << endl;

  system("pause");
  return 0;
}