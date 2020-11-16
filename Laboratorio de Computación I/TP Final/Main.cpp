#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;

#include "1_ Un Jugador.h"
#include "2_ Dos Jugadores.h"
#include "4_ Carga Manual.h"
#include "menu.h"

/// MODO SIMULADO >> ES DE A UNO O DE A DOS JUGADORES ???
/// AGREGAR OTROS COLORES, FORMAS Y OTRAS FUENTES AL TEXTO
/// TESTEAR QUE TODO ANDE BIEN

int main(){

    int opc;
    int pTotales=0;
    int pTotales2=0;
    char vec1[15];
    char vec2[15];
    int vecBunco1[0]={};
    int vecBunco2[0]={};


    while(true){
        system("cls");
        cout<<endl;
        cout<<'\t'<<"*****  MENU PRINCIPAL  *****"<<endl<<endl;
        cout<<'\t'<<" JUEGO DE DADOS BUNCO! ";
        cout<<endl<<endl<<endl;
        cout<<" 1. JUEGO NUEVO PARA UN JUGADOR."<<endl;
        cout<<" 2. JUEGO NUEVO PARA DOS JUGADORES."<<endl;
        cout<<" 3. MOSTRAR PUNTUACION MAS ALTA."<<endl;
        cout<<" 4. MODO SIMULADO (CARGA DE DADOS MANUAL)."<<endl;
        cout<<" 0. SALIR.";
        cout<<endl;
        cout<<endl;
        cout<<" INGRESAR OPCION PARA CONTINUAR: ";
        cin>>opc;
        system("cls");
        switch(opc){
        case 1: pTotales=UnJugador(vec1, 15, vecBunco1, 0);
            break;
        case 2: pTotales2=DosJugadores(vec2, 15, vecBunco2, 0);
            break;
        case 3:

            system("cls");
            cout<<"** [ MODO DE UN JUGADOR ] **"<<endl<<endl;
            if(pTotales!=0){
            cout<<"MAYOR PUNTAJE OBTENIDO EN ESTA SESION: "<<pTotales<<endl;
            cout<<"*** NOMBRE: "<<'\t';
            mostrarNombre(vec1);
            cout<<endl;
            cout<<"CANTIDAD DE BUNCOS OBTENIDOS: "<<vecBunco1[0]<<endl<<endl<<endl;}
            else{
                cout<<"DEBE COMPLETAR UNA PARTIDA EN EL MODO UN JUGADOR PARA PODER VISUALIZAR EL MAYOR PUNTAJE OBTENIDO EN ESTA SECCION"<<endl;
            }

            cout<<"** [ MODO DE DOS JUGADORES ] **"<<endl<<endl;
            if(pTotales2!=0){
            cout<<"MAYOR PUNTAJE OBTENIDO EN ESTA SESION: "<<pTotales2<<endl;
            cout<<"*** NOMBRE: "<<'\t';
            mostrarNombre(vec2);
            cout<<endl;
            cout<<"CANTIDAD DE BUNCOS OBTENIDOS: "<<vecBunco2[0]<<endl<<endl<<endl;}
            else{
                cout<<"DEBE COMPLETAR UNA PARTIDA EN EL MODO MULTIJUGADOR PARA PODER VISUALIZAR EL MAYOR PUNTAJE OBTENIDO EN ESTA SECCION"<<endl;
            }

            break;
        case 4: CargaManual();
            break;
        case 0: cout<<" FIN DEL PROGRAMA."<<endl;
            return 0;
            break;
        default:cout<<" OPCION INCORRECTA, SELECCIONE UNA OPCION VALIDA: "<<endl;
            break;
        }
        system("pause");
    }
}


