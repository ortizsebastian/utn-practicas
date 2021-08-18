/*
9) Dada una lista de 10 números cargarlos en un vector. Luego contar y listar la cantidad
de números pares que aparecen en el vector
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
        cout<<endl;

        for(int x=0; x<cant; x++){
                if(v[x]%2==0){
                    cont++;
                }
        }
        cout<<"TOTAL DE NUMEROS PARES: "<<cont<<endl;

    return 0;
}
