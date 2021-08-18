/*
14) Dadas dos listas de 10 números cada una y sin números repetidos, cargarlas en dos
vectores. Generar un tercer vector que contenga solamente aquellos elementos que están
repetidos en ambos vectores.
Ejemplo: Vector 1: 8, 10, -3, 5, 7. Vector 2: 10, -8, 5, 9, -3.
Vector 3: 10, -3, 5.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
const int cant=5, cant2=5;
int v[cant], v2[cant2];


        cout<<'\t'<<"VECTOR 1: INGRESAR "<<cant<<" NUMEROS."<<endl;
        for(int i=0; i<cant; i++){
            cin>>v[i];
        }
        cout<<'\t'<<"VECTOR 2: INGRESAR "<<cant2<<" NUMEROS."<<endl;
        for(int x=0; x<cant2; x++){
            cin>>v2[x];
        }
        int cont=0;
        for(int z=0; z<cant; z++){
            for(int y=0; y<cant; y++){
                if(v[z]==v2[y]) cont++;
            }
        }
        int v3[cont];
        cout<<'\t'<<"VECTOR 3: "<<endl;
        int cont2=0;
        for(int a=0; a<cant; a++){
            for(int b=0; b<cant2; b++){
                if(v[a]==v2[b]){
                    cont2++;
                    v3[cont2]=v[a];
                    cout<<v3[cont2]<<endl;
                }
            }
        }
    return 0;
}
