#include<iostream>

using namespace std;

int main()
{
    int asientos, pasajes, ocupados, libres;
    cout << "Ingrese la cantidad de asientos del avion: " << endl;
    cin >> asientos;
    cout << "Ingrese la cantidad de pasajes: " << endl;
    cin >> pasajes;

    ocupados = (pasajes * asientos)/100;
    libres = 100 - ocupados;

    cout << "La cantidad de asientos ocupados es del: " << ocupados << "%" << endl;
    cout << "La cantidad de asientos libres es del: " << libres << "%" << endl;


    return 0;
}
