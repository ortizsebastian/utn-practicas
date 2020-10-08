#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

int v[5], nMax=0, pos;

for(int i=0; i<5; i++)
    {
        cout<<"INGRESAR NUMERO:"<<endl;
        cin>>v[i];

        if(nMax==0)
        {
            nMax=v[i];
            pos=i+1;
        }
        else if(v[i]>nMax)
        {
            nMax=v[i];
            pos=i+1;
        }
    }
    cout<<"MAXIMO: "<<nMax<<" POSICION: "<<pos<<endl;



    return 0;
}
