/*
18) Se define como divisores propios de un n�mero a aquellos que son sus divisores
excluyendo al n�mero en s� mismo.
Ejemplo. Los divisores propios del 4 son: 1 y 2.
Ejemplo. Los divisores propios del 12 son; 1, 2, 3, 4 y 6.
Se define a un n�mero como perfecto cuando la suma de todos sus divisores propios
coincide con el n�mero en s� mismo.
Ejemplo: 6 es n�mero perfecto pues 1+2+3=6
Ejemplo: 28 es n�mero perfecto pues 1+2+4+7+14=28
Ejemplo: 12 no es n�mero perfecto pues 1+2+3+4+6=16
Hacer un programa para ingresar un n�mero y luego informar con un cartel aclaratorio si el
mismo es un n�mero perfecto o es n�mero no perfecto
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n, cont=1, acu=0;
    cin>>n;
    while(cont<n)
    {
        if(n%cont==0)
        {
            acu=acu+cont;
        }
        cont++;
    }
    if(acu==n)
    {
        cout<<"perfecto"<<endl;
    }
    else
    {
        cout<<"no perfecto"<<endl;
    }

    system("pause");
    return 0;
}