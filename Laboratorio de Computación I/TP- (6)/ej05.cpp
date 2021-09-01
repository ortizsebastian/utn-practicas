/*
5) Dada una lista de 20 números enteros cargarlos en un vector. Determinar e informar con
un cartel aclaratorio si el sector está ordenado estrictamente en forma creciente.
Por ejemplo: el vector (1, 3, 5, 7, 9) está ordenado estrictamente, el vector (1, 5, 3, 7) no lo
está.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int v[20], x;
    bool orden=true;

    cout<<'\t'<<"INGRESE UNA LISTA DE 20 NUMEROS:"<<endl;

    for(int i=0; i<20; i++)
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
        }
    }
    cout<<endl;

    if(orden==true){
        cout<<"ORDENADO."<<endl;
    }
    else{
        cout<<"DESORDENADO."<<endl;
    }

    return 0;
}
