#include <iostream>
using namespace std;

/* 18) Una empresa de electricidad cobra el servicio a sus clientes de acuerdo a la siguiente
escala:
$ 10 por kilovatio por el consumo hasta los primeros 100 kilovatios de consumo.
$ 12 por kilovatio por el consumo excedente de 101 a 200 kilovatios.
$ 15 por kilovatio por el consumo excedente de 201 kilovatios en adelante.
Hacer un programa para que, dado el consumo en kilovatios de un determinado cliente, el
programa calcule e informe el total a pagar por el mismo.
Ejemplo 1: Un consumo de 55 kilovatios, se calcular�: $ 10 x 55= $ 550
Ejemplo 2: Un consumo de 125 kilovatios, se calcular�: $ 10 x 100 + $ 12 x 25=$ 1300
Ejemplo 3: Un consumo de 250 kilovatios, se calcular�: $ 10 x 100 + $ 12 x 100 + $ 15 x 50 = $ 2950
*/

int main()
{
    int k,x;

    cout << "Ingrese su consumo en kilovatios: " << endl;
    cin >> k;

    if(k<=100){
        x=10*k;
        cout << x;
    }
    else if(k>100&&k<=200){
        x=10*100+12*k;
        cout << x;
    }
    else{
        x=10*100+12*100+15*k;
        cout << x;
    }

    return 0;
}
