/*
Una zinguer�a tiene un conjunto de registros con los datos del trabajo realizado
durante agosto por sus empleados.
Por cada uno de los empleados y d�a trabajado registr� lo siguiente

N�mero de empleado
D�a
Cantidad de ventas realizados
Importe total recaudado

Los datos est�n agrupados por d�a. No se sabe cu�ntos d�as se trabaj�;
los d�as en los que se trabaj� lo hicieron los 20 empleados.
Para indicar el fin de los datos se coloca un n�mero de d�a igual a 0

Calcular e informar
a)      El d�a que m�s se recaud� en la primera semana (entre el d�a 1 y el 7 inclu�do).
b)      Por cada d�a, la cantidad de empleados que recaudaron menos de $25000.
c)      La cantidad total de ventas entre todos los empleados.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int dia, nro, venta, total;
    int r, rAnt=0, d;
    int cont;
    int vTotal=0;

    cout<<"Ingrese Dia trabajado"<<endl;
    cin>>dia;
    cout<<endl<<endl;

    while(dia!=0)
    {
        r=0;
        cont=0;

        for(int i=1; i<=2; i++)
        {
            cout<<"Ingrese Numero de empleado"<<endl;
            cin>>nro;
            cout<<"Ingrese Cantidad de ventas realizadas"<<endl;
            cin>>venta;
            cout<<"Ingrese Importe total recaudado"<<endl;
            cin>>total;

            if(dia>=1 && dia<=7)
            {
                r=r+total;
            }
            if(total<25000)
            {
                cont++;
            }

            vTotal=vTotal+venta;
        }

        if(dia>=1 && dia<=7)
        {
            if(rAnt==0)
            {
                rAnt=r;
                d=dia;
            }
            else if(r>rAnt)
            {
                rAnt=r;
                d=dia;
            }
        }
        cout<<endl;

        if(cont!=0)
        {
            cout<<"En el dia "<<dia<<", "<<cont<<" empleados recaudaron menos de $25000"<<endl;
        }
        else
        {
            cout<<"En el dia "<<dia<<" ningun empleado recaudo menos de $25000"<<endl;
        }

        cout<<endl<<endl;
        cout<<"Ingrese Dia trabajado"<<endl;
        cin>>dia;
    }
    cout<<endl;
    cout<<"El dia "<<d<<" fue el de mayor recaudacion de la primera semana"<<endl;
    cout<<"La cantidad total de ventas entre todos los empleados de todos los dias fue de "<<vTotal<<endl;

    system("pause");
    return 0;
}