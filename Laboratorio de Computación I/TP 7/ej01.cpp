#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <time.h>
#include <ctime>

using namespace std;

int contarNumerosRepetidos(int v[], int numero, int tam);

int contarNumerosRepetidos(int v[], int numero, int tam){
    int i, cant=0;
    for(i=0;i<tam;i++){
        if(v[i]==numero) cant++;
        }
    return cant;
}

int  main(){

    int v[3];
    int cant;
    for(int x=0; x<3; x++){
    cin>>v[x];
    }

    for(int i=0; i<=6; i++){
        cant=contarNumerosRepetidos(v,i,3);
    }
    if(cant==3){
    return 3;
    }
    else if(cant==2){
    return 2;
    }
    else if(cant==1){
    return 1;
    }
    return 0;
}

