/*
3) Leer 10 números y guardarlos en un vector. Calcular el promedio y luego mostrar por
pantalla los valores que son mayores al promedio.
*/

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
