/*
4) Dada una lista de 10 n�meros cargarlos en un vector. Luego intercambiar en el vector el
n�mero en la posici�n 0 con el n�mero en la posici�n 9
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int x, y;
    int v[10];

    cout<<'\t'<<"INGRESAR NUMERO."<<endl;
    for(int i=0; i<10 ; i++)
    {
        cin>>v[i];
    }

    x=v[0];
    y=v[9];
    v[0]=y;
    v[9]=x;

    cout<<"POSICION 1: "<<v[0]<<endl;
    cout<<"POSICION 10: "<<v[9]<<endl;

    return 0;
}
