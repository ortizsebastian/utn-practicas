#include<iostream>

using namespace std;

int main()
{
    int h1, tf;
    float resto;

    cout << "Ingresar la cantidad de horas: " << endl;
    cin >> h1;

    resto = h1%24;
    tf = h1/24;

    cout << "Su tiempo equivale a: " << tf << " dias" << endl;
    cout << resto << " horas" << endl;

    return 0;
}
