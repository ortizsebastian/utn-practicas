/*

11) Hacer un programa para ingresar una lista 10 n�meros e informar el m�ximo de los
negativos y el m�nimo de los positivos.
Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24. M�ximo Negativo -3. M�nimo Positivo 2.

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
        if(num>0)
        {
            maxNeg = num*(-1);
            minPos = num;
        }
        else
        {
            maxNeg = num;
            minPos = num*(-1);
        }

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