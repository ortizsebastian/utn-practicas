/*
21) Hacer un programa para ingresar por teclado los saldos de los clientes de un banco.
Cada registro contiene los siguientes datos:
- N�mero del cliente
- N�mero de sucursal (1, 2, 3 o 4)
- Saldo del cliente
El lote finaliza cuando se ingresa un registro con n�mero de sucursal igual a 10.
Se pide determinar e informar.
a) El n�mero de sucursal con mayor porcentaje de clientes con saldo superior a $ 20.000.
b) El n�mero de cliente con mayor saldo, indicando tambi�n de que n�mero de sucursal es
ese cliente. Se listan 2 resultados.
c) Para cada una de las sucursales la suma de los saldos de todos sus clientes. Se listan 4
resultados
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int nroCliente, nroSuc, saldo;

    cin>>nroCliente;
    cin>>nroSuc;

    while(nroSuc!=10)
    {
        cin>>saldo;







    }



    system("pause");
    return 0;
}