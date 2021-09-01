#include<iostream>

using namespace std;

int main()
{
    int m1, tf;
    float resto;

    cout << "Ingresar la cantidad de minutos" << endl;
    cin >> m1;

    resto = m1%60;
    tf = m1/60;

    cout << "Su tiempo equivale a: " << tf << " Horas" << endl;
    cout << resto << " Minutos" << endl;

    return 0;
}
