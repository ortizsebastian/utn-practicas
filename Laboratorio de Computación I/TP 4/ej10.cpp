/*
12) Dada una lista de números que finaliza cuando se ingresa un cero, informar cual es el
primer y último número impar ingresado.
Ejemplo 8, 4, -5, 6, 9, 5, 18, 0 se informa -5 y 5.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n,impar=0,impar2;

    cin >> n;
    while(n!=0)
    {
       if(n%2!=0)
       {
           if(impar==0)
           {
               impar=n;
           }
           else
           {
               impar2=n;
           }
       }
       cin >> n;
    }

    cout << "primer impar " << impar << " ultimo impar " << impar2 << endl;
    system("pause");
    return 0;
}