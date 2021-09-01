/*
1) Leer 10 números y guardarlos en un vector. Determinar e informar cual es la suma de
los valores del vector.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

int v[10], acu=0;

for(int i=0; i<10; i++)
    {
        cout<<"INGRESAR NUMERO:"<<endl;
        cin>>v[i];
        acu+=v[i];
    }
    cout<<endl;
    cout<<"SUMA TOTAL: "<<acu<<endl;

    return 0;
}