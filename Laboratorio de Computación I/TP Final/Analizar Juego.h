#ifndef ANALIZAR_TIRADA_H_INCLUDED
#define ANALIZAR_TIRADA_H_INCLUDED

#include "Funciones Generales.h"


int AnalizarTirada(int Dados[], int T, int Ronda); /// Ordena las funciones y verifica cual es la de mayor valor, dicho valor lo devuelve como resultado.


int Bunco(int Dados[], int T, int Ronda); /// Verifica si saco 3 dados iguales al numero de ronda.

int Repetidos(int Dados[], int T); /// Verifica si saco 3 dados repetidos pero diferentes al numero de ronda.

int SumaDivisible5(int Dados[], int T); /// Verifica si la suma de sus dados es de resto 0.

int Escalera(int Dados[], int T); /// Ordena sus dados y verifica si estan en orden decreciente.

int CoincidenciaRonda(int Dados[], int T, int Ronda); /// Verifica si alguno de sus dados es igual al numero de ronda.


/// Funciones para mostrar las estadisticas de la partida durante la misma.

void AnalisisUnJugador(char Nombre, int Tam, int Ronda, int Buncos, int CantFallidas, int CantTiradas, int PuntosTotales);

void AnalisisDosJugadores(int Turno, int Ronda, char Nombre_1[], int PuntosTotales_1, int Buncos_1, char Nombre_2[], int PuntosTotales_2, int Buncos_2);



/// Desarrollo de funciones especificas para el juego.



int AnalizarTirada(int Dados[], int T, int Ronda){
    int Puntos[5]={}, Pos;

    Puntos[0]=Bunco(Dados, Ronda, T);
    Puntos[1]=Repetidos(Dados, T);
    Puntos[2]=SumaDivisible5(Dados, T);
    Puntos[3]=Escalera(Dados, T);
    Puntos[4]=ContarNumerosRepetidos(Dados, Ronda, T);

    Pos=MaximoVector(Puntos,5);

    cout<<" RONDA: "<<Ronda<<endl<<endl;
    cout<<" PUNTAJE DE LA TIRADA: "<<Puntos[Pos]<<endl<<endl;
    cout<<" SACASTE: ";

    if(Puntos[Pos]!=0){
        switch(Pos){
        case 0: cout<<" BUNCO!."<<endl<<endl;
            break;
        case 1: cout<<" 3 NUMEROS REPETIDOS DISTINDOS DE LA RONDA!."<<endl<<endl;;
            break;
        case 2: cout<<" SUMA DE NUMEROS DIVISIBLES POR 5!."<<endl<<endl;
            break;
        case 3: cout<<" ESCALERA!."<<endl<<endl;
            break;
        case 4: cout<<" 1 O 2 NUMEROS REPETIDOS IGUAL AL NUMERO DE RONDA!."<<endl<<endl;
            break;
        }
    }
    else{
    cout<<"TIRADA FALLIDA."<<endl<<endl;
    }
    return Puntos[Pos];
}

int Bunco(int Dados[], int Ronda, int T){
    int Bunco;
    Bunco=ContarNumerosRepetidos(Dados, Ronda, T);
    if(Bunco==3) return 21;
    return 0;
}

int Repetidos(int Dados[], int T){
    int Cant;
    bool Repetidos=false;
    for(int I=1; I<=6; I++){
        Cant=ContarNumerosRepetidos(Dados, I, T);
        if(Cant==3) Repetidos=true;
    }
    if(Repetidos==true) return 5;
    return 0;
}

int SumaDivisible5(int Dados[], int T){
    int Suma;
    Suma=SumarVector(Dados, T);
    if(Suma%5==0) return 3;
    return 0;
}

int Escalera(int Dados[], int T){
    bool Ordenados=false;
    OrdenarVector(Dados, T);
    if((Dados[0]==Dados[1]-1) && (Dados[1]==Dados[2]-1)) Ordenados=true;
    if(Ordenados==true) return 2;
    return 0;
}


void AnalisisDosJugadores(int Turno, int Ronda, char Nombre_1[], int PuntosTotales_1, int Buncos_1, char Nombre_2[], int PuntosTotales_2, int Buncos_2){

    system("cls");
    cout<<endl<<endl;
    cout<<'\t'<<" ** RONDA ACTUAL: "<<Ronda<<" **"<<endl;
    cout<<endl;
    cout<<'\t'<<" PROXIMO TURNO: ";
    if(Turno==1) MostrarNombre(Nombre_1);
    else MostrarNombre(Nombre_2);
    cout<<endl<<endl;

    cout<<'\t'<<"    ";
    MostrarNombre(Nombre_1);
    cout<<endl;
    cout<<'\t'<<" PUNTAJE TOTAL: "<<PuntosTotales_1<<endl;
    cout<<'\t'<<" BUNCOS: "<<Buncos_1<<endl<<endl<<endl;

    cout<<'\t'<<"    ";
    MostrarNombre(Nombre_2);
    cout<<endl;
    cout<<'\t'<<" PUNTAJE TOTAL: "<<PuntosTotales_2<<endl;
    cout<<'\t'<<" BUNCOS: "<<Buncos_2<<endl<<endl<<endl;

    system("pause");
    system("cls");
}


void AnalisisUnJugador(char Nombre[], int Ronda, int Buncos, int CantFallidas, int CantTiradas, int PuntosTotales){

    cout<<" PROXIMA RONDA >> ** RONDA NUMERO: "<<Ronda<<" **"<<endl<<endl;
    cout<<" JUGADOR: ";
    MostrarNombre(Nombre);
    cout<<endl<<endl;
    cout<<" BUNCOS: "<<Buncos<<endl;
    cout<<" PUNTOS OBTENIDOS: "<<PuntosTotales<<endl;
    cout<<" TIRADAS REALIZADAS: "<<CantTiradas<<endl;
    cout<<" TIRADAS FALLIDAS: "<<CantFallidas<<endl<<endl<<endl;

}

#endif // ANALIZAR_TIRADA_H_INCLUDED