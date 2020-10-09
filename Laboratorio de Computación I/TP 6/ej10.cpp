/*
10) Dada una lista de 10 números cargarlos en un vector. Luego contar y listar la cantidad
de números primos que aparecen en el vector
*/

#include <iostream>
#include <cstdlib>

using namespace std;

    int main(){
    const int cant=10;
    int v[cant];

    int primos=0;

    cout<<'\t'<<"INGRESAR "<<cant<<" NUMEROS."<<endl;
    for(int i=0; i<cant; i++){
        cin>>v[i];
    }
    cout<<endl;

    for(int x=0; x<cant; x++){
        int cont=0;
        for(int z=1; z<=v[x]; z++){
            if(v[x]%z==0) cont++;
        }
        if(cont==2) primos++;
    }

    cout<<"TOTAL DE NUMEROS PRIMOS: "<<primos<<endl;

    return 0;
}
