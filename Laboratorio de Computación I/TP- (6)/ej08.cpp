/*
8) Dada una lista de 10 n�meros cargarlos en un vector. Luego ingresar un n�mero e
informar la cantidad de veces que ese n�mero aparece en el vector.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
const int cant=10;
int v[cant];

        int n, cont=0;

        cout<<'\t'<<"INGRESAR "<<cant<<" NUMEROS."<<endl;
        for(int i=0; i<cant; i++){
                cin>>v[i];
        }
        cout<<"INGRESAR UN NUMERO: "<<endl;
        cin>>n;
        for(int x=0; x<cant; x++){
                if(v[x]==n){
                    cont++;
                }
        }
        cout<<"EL NUMERO INGRESADO SE ENCUENTRA "<<cont<<" VEZ/VECES DENTRO DEL VECTOR"<<endl;

    return 0;
}
