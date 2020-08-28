/*

21) Dada una lista de 7 números informar el primer número par ingresado y su ubicación en
la lista y el último de los números primos y su ubicación en la lista.
Ejemplo 7, 4, 5, 6, 9, 13, 10 se informa Primer número par: 4 ubicación 2. Ultimo primo:
13 ubicación 6.
Ejemplo 9, 5, 21, 9, 13, 15, 6 se informa Primer número par: 6 ubicación 7. Ultimo primo:
13 ubicación 5.

*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
int num, Par = 0, Primo = 0, posPar = 0, posPrimo = 0, x;

for(int i=1;i<8;i++)
 {
    cout << "Ingrese un numero:" << endl;
    cin >> num;

    x = 0;
    for(int y=1;y<num;y++)
    {
        if(num%y==0)
        {
            x++;
        }
    }
    x = x+1;
    if(x==2)
    {
        Primo = num;
        posPrimo = i;
    }

    if(num%2==0)
    {
        if(Par==0)
        {
            Par = num;
            posPar = i;
        }
    }
 }

  cout << "Primer PAR: " << Par << ", ubicacion: " << posPar << endl;
  cout << "Ultimo PRIMO: " << Primo << ", ubicacion: " << posPrimo << endl;

  system("pause");
  return 0;
}