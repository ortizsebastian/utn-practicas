#include<iostream>

using namespace std;

int main()
{
    float iv, d1, d2, t;
    cout << "Ingrese el importe de la venta: " << endl;
    cin >> iv;
    cout << "Ingrese el descuento a aplicar: " << endl;
    cin >> d1;

    d2 = 1-(d1/100);
    t = iv*d2;

    cout << "El importe final es de: $" << t << endl;

    return 0;
}
