/*
20) Hacer un programa para ingresar los consumos de electricidad de los clientes de una
empresa. Cada registro contiene los siguientes datos:
- Número de cliente
- Localidad del cliente (1, 2 o 3)
- Kilovatios consumidos

El lote finaliza con un registro con número de cliente igual a cero.
El precio es escalonado según la siguiente escala:
$ 10 por kilovatio por los primeros 100 kilovatios de consumo.
$ 12 por kilovatio por el consumo de 101 a 200 kilovatios.
$ 15 por kilovatio por el consumo de 201 kilovatios en adelante.

Además hay un cargo fijo de $ 100.

Ejemplo 1: Consumo de 55 kilovatios, se calculará: $ 10 x 55 + $ 100= $ 650.
Ejemplo 2: Consumo de 125 kilovatios, se calculará: $ 10 x 100 + $ 12 x 25 + $ 100= $ 1400.
Ejemplo 3: Consumo de 250 kilovatios, se calculará: $10 x 100+ $12 x 100 + $15 x 50 + $100= $ 3050.
Ejemplo 3: Consumo de 0 kilovatios, se calculará: $ 10 x 0 + $ 100= $ 100.

Se pide determinar e informar:

a) El número de cliente que tuvo la mayor cantidad de Kilovatios consumidos para cada
una de las 3 localidades. Se listan 3 resultados, uno para cada una de las 3 localidades.

b) El total de recaudación para cada una de las 3 localidades. Se listan 3 resultados, uno
para cada una de las 3 localidades.

c) El número de cliente que tuvo la menor cantidad de Kilovatios consumidos excluyendo a
los clientes que tuvieron Kilovatios consumidos con valor cero. Se lista 1 resultado.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n, x, y=0, z, nroCliente, localidad, consumo;
    int l1=0, l2=0, l3=0;
    int c1, c2, c3;
    int acu1=0, acu2=0, acu3=0;

    cin>>nroCliente;

    while(nroCliente!=0)
    {
        cin>>localidad;
        cin>>consumo;

        if(consumo<=100)
        {
            x=consumo*10;
        }
        else if(consumo>=101&&consumo<=200)
        {
            x=consumo*12;
        }
        else
        {
            x=consumo*15;
        }

        /// CALCULA EL GASTO DEL CLIENTE

        if(y==0)
        {
            y=consumo;
            z=nroCliente;
        }
        else if(consumo<y)
        {
            y=consumo;
            z=nroCliente;
        }

        /// CALCULA EL NRO CLIENTE QUE TUVO EL MENOR CONSUMO

        if(localidad==1)
        {
            acu1=acu1+x;
            if(l1==0)
            {
                l1=nroCliente;
                c1=consumo;
            }
            else if(consumo>c1)
            {
                l1=nroCliente;
                c1=consumo;
            }
        }
        else if(localidad==2)
        {
            acu2=acu2+x;
            if(l2==0)
            {
                l2=nroCliente;
                c2=consumo;
            }
            else if(consumo>c2)
            {
                l2=nroCliente;
                c2=consumo;
            }
        }
        else if(localidad==3)
        {
            acu1=acu1+x;
            if(l3==0)
            {
                l3=nroCliente;
                c3=consumo;
            }
            else if(consumo>c3)
            {
                l3=nroCliente;
                c3=consumo;
            }
        }

        /// NRO DE CLIENTE CON MAYOR CONSUMO
        /// TOTAL RECAUDADO POR CADA LOCALIDAD

        cin>>nroCliente;
    }

    cout<<"LOCALIDAD 1: NRO CLIENTE CON MAYOR CONSUMO "<<l1<<endl;
    cout<<"LOCALIDAD 2: NRO CLIENTE CON MAYOR CONSUMO "<<l2<<endl;
    cout<<"LOCALIDAD 3: NRO CLIENTE CON MAYOR CONSUMO "<<l3<<endl;<<endl;
    cout<<"TOTAL RECAUDADO LOCALIDAD 1 "<<acu1<<endl;
    cout<<"TOTAL RECAUDADO LOCALIDAD 2 "<<acu2<<endl;
    cout<<"TOTAL RECAUDADO LOCALIDAD 3 "<<acu3<<endl<<endl;
    cout<<"NRO CLIENTE CON LA MENOR CANTIDAD DE KV CONSUMIDOS "<<z<<endl;

    system("pause");
    return 0;
}