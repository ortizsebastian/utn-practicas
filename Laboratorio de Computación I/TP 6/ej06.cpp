#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int cant=20, v[cant];

    int x, y=0;
    bool orden=true;

    cout<<'\t'<<"INGRESE UNA LISTA DE "<<cant<<" NUMEROS:"<<endl;

    for(int i=0; i<cant; i++)
    {
        cin>>v[i];

        if(i==0)
        {
            x=v[i];
        }
        else if(v[i]>x)
        {
            x=v[i];
        }
        else
        {
            orden=false;
            y++;
        }
    }
    cout<<endl;

    if(orden==true){
        cout<<"LISTA ORDENADA."<<endl;
    }
    else{
        cout<<"LISTA DESORDENADA."<<endl;
        cout<<"CANTIDAD DE RUPTURAS: "<<y<<endl;
    }

    return 0;
}
