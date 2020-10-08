#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int x, y;
    int v[10];

    cout<<'\t'<<"INGRESAR NUMERO."<<endl;
    for(int i=0; i<10 ; i++)
    {
        cin>>v[i];
    }

    x=v[0];
    y=v[9];
    v[0]=y;
    v[9]=x;

    cout<<"POSICION 1: "<<v[0]<<endl;
    cout<<"POSICION 10: "<<v[9]<<endl;

    return 0;
}
