/*

25) Se ingresan los datos con la producción de los operarios de una empresa. Existe un total
de 20 registros, uno para cada operario. Cada registro contiene:
- Número de operario (1 a 20)
- Sector (1, 2 o 3)
- Cantidad de piezas defectuosas
Se pide determinar e informar:
a) Para cada uno de los 3 sectores el número del operario que obtuvo mayor cantidad de
piezas defectuosas.
b) El sector donde se totalizó la mayor cantidad de piezas defectuosas.

*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int nroOp, sector, cantPiezas;
    int cantPiezas1=0, cantPiezas2=0, cantPiezas3=0;
    int op1, op2, op3;
    int acu1=0, acu2=0, acu3=0;


for(int i=0; i<20; i++)
{
    cout << "Ingrese nro op: " << endl;
    cin >> nroOp;
    cout << "Ingrese sector: " << endl;
    cin >> sector;
    cout << "Ingrese cant piezas defectuosas: " << endl;
    cin >> cantPiezas;

    if(sector == 1)
    {
        acu1+=cantPiezas;
        if(cantPiezas>cantPiezas1)
        {
            cantPiezas1=cantPiezas;
            op1=nroOp;
        }
    }
    else if(sector == 2)
    {
        acu2+=cantPiezas;
        if(cantPiezas>cantPiezas2)
        {
            cantPiezas2=cantPiezas;
            op2=nroOp;
        }
    }
    else if(sector == 3)
    {
        acu3+=cantPiezas;
        if(cantPiezas>cantPiezas3)
        {
            cantPiezas3=cantPiezas;
            op3=nroOp;
        }
    }
}

cout << "Sector 1 - op c/mayor cant piezas defectuosas: " << op1 << " " << cantPiezas1 << endl;
cout << "Sector 2 - op c/mayor cant piezas defectuosas: " << op2 << " " << cantPiezas2 << endl;
cout << "Sector 3 - op c/mayor cant piezas defectuosas: " << op3 << " " << cantPiezas3 << endl << endl << endl;

if(acu1>acu2 && acu1>acu3)
{
    cout << "Mayor cant piezas defectuosas: Sector 1 con " << acu1 << endl;
}
else if(acu2>acu1 && acu2>acu3)
{
    cout << "Mayor cant piezas defectuosas: Sector 2 con " << acu2 << endl;
}
else
{
    cout << "Mayor cant piezas defectuosas: Sector 3 con " << acu3 << endl;
}

  system("pause");
  return 0;
}