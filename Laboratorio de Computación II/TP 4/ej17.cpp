/*
17) Se define a un n�mero como primo cuando tiene solamente dos divisores.
Ejemplo 1: 2, 7, 11, 13 son n�meros primos, ya que todos tienen solamente dos divisores.
Ejemplo 2: 6 no es primo, pues tiene 4 divisores (1, 2, 3 y 6)
Ejemplo 3: 9 no es primo, pues tiene 3 divisores (1, 3 y 9)
Favor de no confundir n�mero primo con n�mero par. Son dos definiciones diferentes.
Hacer un programa para ingresar un n�mero y luego informar con un cartel aclaratorio si el
mismo es un n�mero primo o es n�mero no primo.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n)
    {
        if(n%2==0&&n!=2||n%3==0)
        {
            cout<<"No es primo"<<endl;
        }
        else
        {
            cout<<"Es primo"<<endl;
        }
     cin>>n;
    }

    system("pause");
    return 0;
}