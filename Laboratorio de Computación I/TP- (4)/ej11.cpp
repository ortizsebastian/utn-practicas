/*
10) Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un
cero, informar el m�ximo de los negativos y el m�nimo de los positivos.
Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24, 0. M�ximo Negativo -3. M�nimo Positivo 2
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n,maxNeg,minPos;

    cin >> n;
    while(n!=0)
    {
        if(n>0)
        {
            if(minPos==0)
            {
                minPos=n;
            }
            else if(n<minPos)
            {
                minPos=n;
            }
        }
        else
        {
            if(maxNeg==0)
            {
                maxNeg=n;
            }
            else if(n>maxNeg)
            {
                maxNeg=n;
            }
        }
        cin >> n;
    }

    cout << "Minimo positivo: " << minPos << " Maximo negativo: " << maxNeg << endl;
    system("pause");
    return 0;
}