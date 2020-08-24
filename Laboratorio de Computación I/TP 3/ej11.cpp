/*

11) Hacer un programa para ingresar una lista 10 números e informar el máximo de los
negativos y el mínimo de los positivos.
Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24. Máximo Negativo -3. Mínimo Positivo 2.

*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

int num, maxNeg = 0, minPos = 0;


for(int i=0;i<10;i++)
{
    cout << "Ingrese un numero: " << endl;
    cin >> num;

    if(i==0)
    {
        maxNeg = num;
        minPos = num;
    }
    else if(i!=0)
    {
        if(num>0)
        {
            if(minPos>num)
            {
                minPos = num;
            }
        }
        else if(num<0)
        {
            if(maxNeg<num)
            {
                maxNeg = num;
            }
        }
    }
}

  cout << "Minimo Positivo: " << minPos << endl;
  cout << "Maximo Negativo: " << maxNeg << endl;

  system("pause");
  return 0;
}