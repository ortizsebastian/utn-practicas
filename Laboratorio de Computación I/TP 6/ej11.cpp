#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
const int cant=5, cant2=9;
int v[cant], v2[cant2]={0};


        cout<<'\t'<<"VECTOR 1: INGRESAR "<<cant<<" NUMEROS."<<endl;
        for(int i=0; i<cant; i++){
                cin>>v[i];
                if(i==0){
                    v2[i]=v[i];
                }
                else{
                    v2[i+i]=v[i];
                }
        }
        for(int x=0; x<cant2; x++){
            if(v2[x]==0){
                v2[x]=(v2[x-1]+v2[x+1])/2;
            }
            cout<<"VECTOR 2: POSICION "<<x+1<<'\t'<<v2[x]<<endl;
        }

    return 0;
}
