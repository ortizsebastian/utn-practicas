#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

int v[5], vSuma=0, promedio, total=0;

for(int i=0; i<5; i++)
    {
        cout<<"INGRESAR NUMERO:"<<endl;
        cin>>v[i];
        vSuma+=v[i];
    }
    promedio=vSuma/5;

for(int x=0; x<5; x++)
    {
        if(v[x]>promedio)
        {
            total++;
        }
    }
    cout<<"TOTAL DE NUMEROS MAYORES AL PROMEDIO: "<<total<<endl;

    return 0;
}
