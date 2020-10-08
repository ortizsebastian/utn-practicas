#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int v[20], x;
    bool orden=true;

    cout<<'\t'<<"INGRESE UNA LISTA DE 20 NUMEROS:"<<endl;

    for(int i=0; i<20; i++)
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
        }
    }
    cout<<endl;

    if(orden==true){
        cout<<"ORDENADO."<<endl;
    }
    else{
        cout<<"DESORDENADO."<<endl;
    }

    return 0;
}
