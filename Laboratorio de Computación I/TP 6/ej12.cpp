#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
const int cant=10;
int v[cant];

        bool flag=true;
        int cont1=0;
        cout<<'\t'<<"INGRESAR "<<cant<<" NUMEROS."<<endl;
        for(int i=0; i<cant; i++){
            cin>>v[i];
            cont1++;
            int cont2=0;
            for(int x=0; x<cant; x++){
                cont2++;
                if(v[i]==v[x]&&cont1!=cont2){
                    flag=false;
                }
            }
        }
        if(flag==false){
                cout<<"HAY NUMEROS REPETIDOS."<<endl;
        }
        else{
                cout<<"NO SE REPITE NINGUN NUMERO."<<endl;
        }

    return 0;
}
