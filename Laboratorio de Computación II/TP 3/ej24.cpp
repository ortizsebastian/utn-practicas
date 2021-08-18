/*

24) Hacer un programa para ingresar por teclado el número, sueldo y la antigüedad de los
30 empleados de una empresa. Cada registro está compuesto por los siguientes datos:
- Número del empleado
- Sueldo
- Antigüedad
Se pide determinar e informar:
a) Cual es el número del empleado con mayor sueldo y que antigüedad tiene ese empleado.
b) Informar la antigüedad promedio de los empleados con sueldo mayor a $20.000.

*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

int nro, sueldo, ant;
int nro2, sueldo2, ant2;
int cont=0, ant3=0, prom;

for(int i=0; i<30; i++)
{
    cout << "Ingrese." << endl << endl;
    cout << "Numero de empleado: ";
    cin >> nro;
    cout << "Sueldo: ";
    cin >> sueldo;
    cout << "Antiguedad: ";
    cin >> ant;

    if(sueldo>20000)
    {
        ant3+=ant;
        cont++;
    }
    if(i==0)
    {
        nro2 = nro;
        sueldo2 = sueldo;
        ant2 = ant;
    }
    else
    {
        if(sueldo>sueldo2)
        {
            nro2 = nro;
            sueldo2 = sueldo;
            ant2 = ant;
        }
    }
}

prom = ant3/cont;

cout << "Empleado Numero: " << nro2 << endl;
cout << "Sueldo: " << sueldo2 << endl;
cout << "Antiguedad: " << ant2 << endl << endl << endl;

cout << "Antiguedad promedio de empleados con un sueldo superior a $20.000. " << prom << endl;

  system("pause");
  return 0;
}