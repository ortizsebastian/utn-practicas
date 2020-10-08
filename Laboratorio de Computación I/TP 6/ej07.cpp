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
        cout<<"INGRESAR UN NUMERO: "<<'\t';
        cin>>n;
        for(int x=0; x<cant; x++){
                if(v[x]==n){
                    cont++;
                }
        }
        cout<<"EL NUMERO INGRESADO SE ENCUENTRA "<<cont<<" DENTRO DEL VECTOR"<<endl;

    return 0;
}
