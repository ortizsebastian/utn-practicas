#include<iostream>

using namespace std;

int main()
{
    int m, h, d;
    float rd, rh, rh2, rf;

    cout << "Ingresar la cantidad de minutos: " << endl;
    cin >> m;

    d = m/1440;
    rd = m%1440;

    h = rd/60;
    rh = rd/60;
    rh2 = rh - h;
    rf = rh2*60;

    cout << "Su tiempo equivale a: " << endl;
    cout << d << " dias" << endl;
    cout << h << " horas" << endl;
    cout << rf << " minutos" << endl;

    return 0;
}
