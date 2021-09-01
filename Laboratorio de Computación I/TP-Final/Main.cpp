#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;

#include "rlutil.h"

using namespace rlutil;

#include "1_ Un Jugador.h"
#include "2_ Dos Jugadores.h"
#include "3_ Puntuaciones.h"
#include "4_ Modo Simulado.h"


int main(){

    setColor(WHITE);
    hidecursor();

    int Op;

    /// Variables y vectores para cargar en UnJugador() y DosJugadores() que despues se mostraran dentro de la funcion Puntuaciones().

    int Puntos=0;
    int PuntosGanador=0;
    const int T=15;
    char VecNombre[T]={};
    char VecNombre_1[T]={};
    char VecNombre_2[T]={};
    int CantBuncos=0;
    int CantBuncos_1=0;
    int CantBuncos_2=0;

    /// Menu principal del programa.

    while(true){
        cls();
        cout<<endl;
        cout<<'\t'<<"*****  MENU PRINCIPAL  *****"<<endl<<endl;
        cout<<'\t'<<" JUEGO DE DADOS BUNCO !! ";
        cout<<endl<<endl<<endl;
        cout<<" 1. JUEGO NUEVO PARA UN JUGADOR."<<endl;
        cout<<" 2. JUEGO NUEVO PARA DOS JUGADORES."<<endl;
        cout<<" 3. MOSTRAR PUNTUACION MAS ALTA."<<endl;
        cout<<" 4. MODO SIMULADO (CARGA DE DADOS MANUAL)."<<endl;
        cout<<" 0. SALIR.";
        cout<<endl;
        cout<<endl;
        cout<<" INGRESAR OPCION PARA CONTINUAR: ";
        cin>>Op;
        cls();
        switch(Op){
        case 1: Puntos=UnJugador(VecNombre, T, CantBuncos); /// Le envio los parametros y le pido el retorno que necesito para Mostrar puntuacion mas alta.
            break;
        case 2: PuntosGanador=DosJugadores(VecNombre_1, VecNombre_2, T, CantBuncos_1, CantBuncos_2); /// Le envio los parametros y le pido el retorno que necesito para Mostrar puntuacion mas alta.
            break;
        case 3: Puntuaciones(VecNombre, VecNombre_1, VecNombre_2, CantBuncos, CantBuncos_1, CantBuncos_2, PuntosGanador, Puntos); /// Le envio todos las variables y vectores para poder mostrarlos o no por pantalla.
            break;
        case 4: ModoSimulado(); /// Misma funcion que UnJugador pero con carga manual del vector dados.
            break;
        case 0: cout<<" FIN DEL PROGRAMA."<<endl;
            return 0;
            break;
        default: cout<<" OPCION INCORRECTA, SELECCIONE UNA OPCION VALIDA: "<<endl;
            break;
        }
        system("pause");
    }
}
