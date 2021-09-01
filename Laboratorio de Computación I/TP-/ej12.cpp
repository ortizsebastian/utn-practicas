#include<iostream>

using namespace std;

int main()
{
    int hc, t;
    float h, hc1, hc2, hs, hs2;

    cout << "Ingrese la cantidad de huevos que desea comprar: " << endl;
    cin >> h;

    hc = h/12;                //1 caja
    hc1 = h/12;               //1.25 caja + resto

    hc2 = hc*100;             //100 precio cajas

    hs = hc1-hc;              //0.25 huevos sueltos
    hs2 = (hs*12)*12;        //36 precio sueltos

    t = hc2+hs2;              //sueltos + caja 136

    cout << "El valor de su compra es de: " << t << endl;

    return 0;
}
