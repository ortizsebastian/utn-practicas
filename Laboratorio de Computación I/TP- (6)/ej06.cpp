/*
6) Dada una lista de 20 números cargarlos en un vector. Determinar e informar la cantidad
de “rupturas” que tiene el vector con respecto a un orden estrictamente creciente. Ejemplo:
el vector 1,3,4,2,4,4,6,8,1,7,9 tiene 3 rupturas.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int cant=10, v[cant];

    int x, y=0;
    bool orden=true;

    cout<<'\t'<<"INGRESE UNA LISTA DE "<<cant<<" NUMEROS:"<<endl;

    for(int i=0; i<cant; i++)
    {
        cin>>v[i];

        if(i==0)
        {
            x=v[i];
        }
        else if(v[i]>x)
        {
            x=v[i];
        }
        else
        {
            orden=false;
            y++;
        }
    }
    cout<<endl;

    if(orden==true){
        cout<<"LISTA ORDENADA."<<endl;
    }
    else{
        cout<<"LISTA DESORDENADA."<<endl;
        cout<<"CANTIDAD DE RUPTURAS: "<<y<<endl;
    }

    return 0;
}
