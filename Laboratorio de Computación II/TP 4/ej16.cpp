/*
16) Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresan
dos n�meros positivos consecutivos, y luego informar el m�ximo. Cuando se ingresa el
n�mero positivo repetido el mismo debe ser descartado.
Ejemplo: 5, -10, 20, -8, 0, 13, -35, -8, 15, 10. Se listar� M�ximo 20.
En este caso, el segundo n�mero positivo consecutivo, el 10, no se analiza, solo sirve para
finalizar el ingreso.
Ejemplo: 5, -10, 20, -20, 0, 55, -13, 45, -8, -5, 12, 120. Se listar� M�ximo 55.
En este caso, el segundo n�mero positivo consecutivo, el 120, no se analiza, solo sirve para
finalizar el ingreso.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n,ant,max=0;

    cin>>n;
    while(n!=ant)
    {   ant=n;
        if(max==0)
        {
          max=n;
        }
        else if(n>max)
        {
            max=n;
        }
        cin>>n;
        if(n>0 && n==ant) break;
    }
    cout<<"maximo "<<max<<endl;

    system("pause");
    return 0;
}