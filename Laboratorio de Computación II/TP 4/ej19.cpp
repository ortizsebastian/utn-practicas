/*
19) Dada una lista de n�meros que finaliza cuando se ingresa un cero, informar el primer
n�mero par ingresado y su ubicaci�n en la lista y el �ltimo de los n�meros primos y su
ubicaci�n en la lista.
Ejemplo 7, 4, 5, 6, 9, 13, 10 se informa Primer n�mero par: 4 ubicaci�n 2. Ultimo primo:
13 ubicaci�n 6.
Ejemplo 9, 5, 21, 9, 13, 15, 6 se informa Primer n�mero par: 6 ubicaci�n 7. Ultimo primo:
13 ubicaci�n 5.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n, pPar=0, uPrimo=0;
    int parPos=0, primoPos=0, div, cont2, cont=0;
    cin>>n;
    while(n!=0)
    {
        cont++;
        if(pPar==0 && n%2==0)
        {
            pPar=n;
            parPos = cont;
        }
        else if(n%2!=0)
        {
            div=1;
            cont2=0;
            while(div<=n)
            {
                if(n%div==0)
                {
                    cont2++;
                }
                div++;
            }
            if(cont2==2)
            {
                uPrimo=n;
                primoPos=cont;
            }
        }
        cin>>n;
    }
    cout<<"primer par "<<pPar<<" posicion "<<parPos<<endl;
    cout<<"ultimo primo "<<uPrimo<<" posicion "<<primoPos<<endl;

    system("pause");
    return 0;
}