#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
const int cant=10;
int v[cant];

        int a, b, nMax;

        cout<<'\t'<<"INGRESAR "<<cant<<" NUMEROS."<<endl;
        for(int i=0; i<cant; i++){
            cin>>v[i];
        }
        cout<<endl;
        cout<<"INGRESAR DOS NUMEROS ENTRE 0 Y 10:"<<endl;
        cin>>a;
        cin>>b;
        if(a>b){
            nMax=a;
        }
        else{
            nMax=b;
        }
        cout<<endl;
        for(int x=0; x<cant; x++){
            if(v[x]==nMax) cout<<"NUMERO MAXIMO DEL VECTOR: "<<v[x]<< " POSICION: "<<x+1<<endl;
        }


    return 0;
}
