/*
7) Dada una lista de 10 n�meros cargarlos en un vector. Luego ingresar un n�mero e
informar el primer �ndice donde ese n�mero aparece en el vector. En caso de no aparecer se
mostrar� el valor �ndice igual a -1.
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