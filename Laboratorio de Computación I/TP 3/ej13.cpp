/*

13) Dada una lista de 7 números informar cual es el primer y último número impar
ingresado.
Ejemplo 8, 4, -5, 6, 9, 5, 18 se informa -5 y 5

*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

int num, pImp = 0, uImp;

for(int i=0;i<7;i++)

{
    cout << "Ingrese un numero: " << endl;
    cin >> num;

    if(num%2!=0 && pImp==0)
    {
        pImp = num;
    }
    else if(num%2!=0)
    {
        uImp = num;
    }
}

    cout << "Primer impar: " << pImp << endl;
    cout << "Ultimo impar: " << uImp << endl;

  system("pause");
  return 0;
}
