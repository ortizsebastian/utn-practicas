#include "Funciones Generales.h"


int ModoSimulado(){

    int const T=3;
    int const Tam=15;
    int Op;
    int Ronda=1;
    int Dados[T];
    char Nombre[Tam];

    int PuntosTirada=0;
    int PuntosTotales=0;
    int Buncos=0;
    int CantFallidas=0;
    int PuntosRonda=0;
    int CantTiradas=0;

    bool X=false;
    bool Y=false;

    cout<<" INGRESE SU NOMBRE: ";
    CargarNombre(Nombre);

    do{
        system("cls");
        cout<<'\t'<<" ** PARTIDA EN MODO SOLITARIO **"<<endl;
        cout<<endl<<endl<<endl;
        cout<<'\t'<<" || RONDA ACTUAL: "<<Ronda<<" ||"<<endl;
        cout<<endl<<endl<<endl;

        if(X==false) cout<<" 1. REALIZAR TIRADA."<<endl;
        if(X==true)  cout<<" 2. MOSTRAR DADOS."<<endl;
        if(X==true)  cout<<" 3. ANALICE SU TIRADA PARA PODER CONTINUAR."<<endl;
        cout<<" 4. INSTRUCCIONES."<<endl;
        cout<<" 0. VOLVER AL MENU PRINCIPAL.";

        cout<<endl<<endl<<endl<<endl;
        if(Y==true) cout<<" =>> PUNTOS TOTALES DE LA RONDA ACTUAL: "<<PuntosRonda<<endl<<endl;
        if(Y==true) cout<<" =>> CANTIDAD DE BUNCOS OBTENIDOS: "<<Buncos<<endl<<endl;
        if(Y==true) cout<<" =>> PUNTOS TOTALES ACUMULADOS: "<<PuntosTotales<<endl<<endl;

        cout<<endl;
        cout<<"** INGRESAR OPCION PARA CONTINUAR: ";
        cin>>Op;
        system("cls");

        switch(Op){
            case 1: /// Carga manual del vector dados.
            if(X==false){CargarVector(Dados, T); X=true; CantTiradas++;}
            else cout<<"* OPCION INCORRECTA, SELECCIONE UNA OPCION VALIDA: "<<endl<<endl;
            break;

            case 2:
            if(X==true) MostrarVector(Dados, T);
            else cout<<"* OPCION INCORRECTA, SELECCIONE UNA OPCION VALIDA: "<<endl<<endl;
            break;

            case 3:
            if(X==true){
                PuntosTirada=AnalizarTirada(Dados, T, Ronda);
                PuntosRonda=PuntosRonda+PuntosTirada;
                PuntosTotales=PuntosTotales+PuntosTirada;
                if(PuntosTirada==21) Buncos++;
                if(PuntosTirada==0) CantFallidas=CantFallidas+2;
                X=false;
                Y=true;
            }
            else cout<<"* OPCION INCORRECTA, SELECCIONE UNA OPCION VALIDA: "<<endl<<endl;
            break;

            case 4: Instrucciones();
            break;

            case 0:
            return 0;
            break;

            default: cout<<"* OPCION INCORRECTA, SELECCIONE UNA OPCION VALIDA: "<<endl;
            break;
        }
        if(PuntosRonda>=21){
            system("pause");
            system("cls");
            Ronda++;
            PuntosRonda=0;
            AnalisisUnJugador(Nombre, Ronda, Buncos, CantFallidas, CantTiradas, PuntosTotales);
        }
        system("pause");
    }
    while(Ronda<=6);
    system("cls");

    cout<<" ******* SISTEMA SIMULADO *******"<<endl;
    cout<<" ** CANTIDAD DE RONDAS TOTALES FINALIZADAS ** "<<endl<<endl<<endl;
    cout<<" ==> JUGADOR: ";
    MostrarNombre(Nombre);

    cout<<" CANTIDAD DE TIRADAS FALLIDAS: "<<CantFallidas<<'\t'<<" CANTIDAD DE BUNCOS OBTENIDOS: "<<Buncos<<endl<<endl;
    cout<<" CANTIDAD DE TIRADAS NECESARIAS PARA COMPLETAR LAS 6 RONDAS >> "<<CantTiradas<<endl<<endl;
    cout<<" PUNTAJE TOTAL OBTENIDO: "<<PuntosTotales<<'\t'<<"** PARTIDA FINALIZADA **"<<endl;
    cout<<" AL SER UNA SIMULACION DE PARTIDA NO SE GUARDARA SU PUNTUACION FINAL OBTENIDA EN LA SECCION PUNTUACIONES MAS ALTAS !!"<<endl;
    cout<<endl<<endl<<endl;

}