#include "Funciones Generales.h"
#include "Instrucciones.h"
#include "Analizar Juego.h"

int UnJugador(char VecNombre[], int Tam, int CantBuncos){

    /// Declaro vector dados, vector nombre, Op (Opciones del switch) y Ronda inicial en 1.

    int const T=3;
    int Op;
    int Ronda=1;
    int Dados[T];
    char Nombre[Tam];

    /// Contadores y Acumuladores para las tiradas y puntos.

    int PuntosTirada=0;
    int PuntosTotales=0;
    int Buncos=0;
    int CantFallidas=0;
    int PuntosRonda=0;
    int CantTiradas=0;

    /// Banderas para mostrar o no partes del menu.

    bool X=false;
    bool Y=false;

    /// Desarrollo.

    cout<<" INGRESE SU NOMBRE: ";
    CargarNombre(Nombre);

    do{
        system("cls");
        cout<<'\t'<<" ** PARTIDA EN MODO SOLITARIO **"<<endl;
        cout<<endl<<endl<<endl;
        cout<<'\t'<<" || RONDA ACTUAL: "<<Ronda<<" ||"<<endl;
        cout<<endl<<endl<<endl;

        /// Menu de juego.

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
            case 1: /// Genera numeros aleatorios para los dados.
            if(X==false){CargarAleatorio(Dados, T, 5); X=true; CantTiradas++;}
            else cout<<"* OPCION INCORRECTA, SELECCIONE UNA OPCION VALIDA: "<<endl<<endl;
            break;

            case 2: /// Muestra los numeros aleatorios obtenidos al usuario.
            if(X==true) MostrarVector(Dados, T);
            else cout<<"* OPCION INCORRECTA, SELECCIONE UNA OPCION VALIDA: "<<endl<<endl;
            break;

            case 3: /// Analiza los puntos obtenidos.
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

            case 4: Instrucciones(); /// Reglamento del juego.
            break;

            case 0: /// Salir.
            return 0;
            break;

            default: cout<<"* OPCION INCORRECTA, SELECCIONE UNA OPCION VALIDA: "<<endl;
            break;
        }

        /// Pasaje de ronda y pantalla con estadisticas del juego entre rondas.

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

    /// Fin de la partida con las estadisticas finales del juego.

    system("cls");
    cout<<" ** CANTIDAD DE RONDAS TOTALES FINALIZADAS ** "<<endl<<endl<<endl;
    cout<<" ==> JUGADOR: ";
    MostrarNombre(Nombre);

    cout<<endl<<endl;
    PuntosTotales=PuntosTotales-CantFallidas;
    CantBuncos=Buncos;
    cout<<" CANTIDAD DE TIRADAS FALLIDAS: "<<CantFallidas<<'\t'<<" CANTIDAD DE BUNCOS OBTENIDOS: "<<Buncos<<endl<<endl;
    cout<<" CANTIDAD DE TIRADAS NECESARIAS PARA COMPLETAR LAS 6 RONDAS >> "<<CantTiradas<<endl<<endl;
    cout<<" PUNTAJE TOTAL OBTENIDO: "<<PuntosTotales<<'\t'<<"** PARTIDA FINALIZADA **"<<endl;
    cout<<endl<<endl<<endl;
    CopiarVectorNombre(Nombre, VecNombre, Tam);
    return PuntosTotales;
}
