#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
const int cant=3, cant2=3, cant3=6;
int v[cant], v2[cant2], v3[cant3]={0};

        cout<<'\t'<<"INGRESAR "<<cant<<" NUMEROS."<<endl;
        for(int i=0; i<cant; i++){
            cin>>v[i];
        }

        cout<<'\t'<<"INGRESAR "<<cant2<<" NUMEROS."<<endl;
        for(int x=0; x<cant2; x++){
            cin>>v2[x];
        }
        int cont=0;
        int h;
        for(int y=0; y<cant3; y){
            h=y*2;
            v3[h]=v[cont];
            cont++;
            cout<<"VECTOR 3: "<<v3[cont]<<endl;
        }

    return 0;
}
