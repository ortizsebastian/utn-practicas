#include<iostream>

using namespace std;

int main()
{
    int vt, vt2, pd, pd2;
    cout << "Ingrese el importe de la venta" << endl;
    cin >> vt;
    cout << "Ingrese el importe de la venta bonificada" << endl;
    cin >> vt2;

    pd = (vt2*100)/vt;
    pd2 = 100 - pd;

    cout << "El descuento aplicado es del: " << pd2 << "%" << endl;


    return 0;
}
