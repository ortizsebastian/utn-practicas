/*
Se ingresan los datos de los 10 artículos que vende una empresa. Cada registro
contiene:
- Número de artículo (1 a 10)
- Precio Unitario
- Clase de artículo (1, 2 o 3)

Se pide determinar e informar:

a) El número del artículo más caro para cada una de las 3 clases. Se listan 3 resultados, uno
para cada una de las 3 clases.
b) La clase de artículo con el mayor precio promedio.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
int nroArt, preUnit, clasArt;

    int pUnit1=0, pUnit2=0, pUnit3=0;
    int Art1=0, Art2=0, Art3=0;
    int acu1=0, acu2=0, acu3=0;
    float prom1, prom2, prom3;
    int acu1s, acu2s, acu3s;
    int cont1=0, cont2=0, cont3=0;

for(int i=0; i<2; i++)
{
    cout << "Ingrese Numero de articulo:" << endl;
    cin >> nroArt;
    cout << "Ingrese Precio Unitario:" << endl;
    cin >> preUnit;
    cout << "Ingrese Clase de articulo:" << endl;
    cin >> clasArt;
    cout << endl << endl;

    if(clasArt==1 && pUnit1==0)
    {
        pUnit1 = preUnit;
        Art1 = nroArt;
        acu1s = preUnit;
        cont1++;
    }
    else if(clasArt==2 && pUnit2==0)
    {
        pUnit2 = preUnit;
        Art2 = nroArt;
        acu2s = preUnit;
        cont2++;
    }
    else if(clasArt==3 && pUnit3==0)
    {
        pUnit3 = preUnit;
        Art3 = nroArt;
        acu3s = preUnit;
        cont3++;
    }

    if(clasArt==1 && pUnit1!=0)
    {
        acu1 = preUnit + acu1s;
        cont1++;
        if(preUnit>pUnit1)
        {
            pUnit1 = preUnit;
            Art1 = nroArt;
        }
    }
    else if(clasArt==2 pUnit2!=0)
    {
        acu2 = preUnit + acu2s;
        cont2++;
        if(preUnit>pUnit2)
        {
            pUnit2 = preUnit;
            Art2 = nroArt;
        }
    }
    else if(clasArt==3 pUnit3!=0)
    {
        acu3 = preUnit + acu3s;
        cont3++;
        if(preUnit>pUnit3)
        {
            pUnit3 = preUnit;
            Art3 = nroArt;
        }
    }
}

prom1 = acu1/cont1;
prom2 = acu2/cont2;
prom3 = acu3/cont3;

cout << "Clase 1 - Articulo: " << Art1 << " Precio Unitario: " << pUnit1 << endl;
cout << "Clase 2 - Articulo: " << Art2 << " Precio Unitario: " << pUnit2 << endl;
cout << "Clase 3 - Articulo: " << Art3 << " Precio Unitario: " << pUnit3 << endl;

if(prom1>prom2 && prom1>prom3)
{
    cout << "Mayor promedio - Clase 1 - Promedio: "<< prom1 << endl;
}
else if(prom2>prom1 && prom2>prom3)
{
    cout << "Mayor promedio - Clase 2 - Promedio: "<< prom2 << endl;
}
else
{
    cout << "Mayor promedio - Clase 3 - Promedio: "<< prom3 << endl;
}

  system("pause");
  return 0;
}