/*
7) Dada una lista de 10 números cargarlos en un vector. Luego ingresar un número e
informar el primer índice donde ese número aparece en el vector. En caso de no aparecer se
mostrará el valor índice igual a -1.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

int v[10], n, y=0;

    for(int i=0; i<10; i++)
    {
        cout<<"INGRESAR NUMERO:"<<endl;
        cin>>v[i];
    }
    cout<<endl;
    cout<<"INGRESE UN NUMERO: "<<'\t';
    cin>>n;

    int pos=0;
    for(int x=0; x<10; x++)
    {
        pos++;
        if(v[x]==n) y=pos;
    }
    if(y==0)
    {
        cout<<"VALOR INDICE -1"<<endl;
    }
    else
    {
        cout<<"NUMERO "<<n<<" INDICE "<<pos-1<<endl;
    }

    return 0;
}