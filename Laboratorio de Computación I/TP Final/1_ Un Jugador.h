
#include "Funciones Generales.h"
#include "Instrucciones.h"

int analisisPuntos(int v[], int t, int ronda);

int calcularBunco(int v[], int t, int ronda);

int calcularRepetidos(int v[], int t);

int calcularSumaDivisible5(int v[], int t);

int calcularEscalera(int v[], int t);

int calcularCoincidenciaRonda(int v[], int t, int ronda);


int UnJugador(char vec[], int tam, int vec1[], int tam1){
    int opc;
    int const t=3;
    int v[t];
    int ronda=1;
    char vNombre1[15];
    bool flag=false;
    bool flag2=false;
    int puntosAcum=0;
    int puntosTotales=0;
    int cantBuncos=0;
    int cantFallidas=0;
    int puntosRonda=0;
    int cantTiradas=0;

    cout<<" INGRESE SU NOMBRE: ";
    cargarNombre(vNombre1);


    while(ronda<=6){
        system("cls");
        cout<<'\t'<<" ** PARTIDA EN MODO SOLITARIO **"<<endl;
        cout<<endl<<endl<<endl;
        if(puntosRonda>=21){ronda++; puntosRonda=0;}
        cout<<'\t'<<" || RONDA ACTUAL: "<<ronda<<" ||"<<endl;

        cout<<endl<<endl<<endl;

        if(flag==false) cout<<" 1. REALIZAR TIRADA."<<endl;
        if(flag==true)  cout<<" 2. MOSTRAR DADOS."<<endl;
        if(flag==true)  cout<<" 3. ANALICE SU TIRADA PARA PODER CONTINUAR."<<endl;
        cout<<" 4. INSTRUCCIONES."<<endl;
        cout<<" 0. VOLVER AL MENU PRINCIPAL.";

        cout<<endl<<endl;
        if(flag2==true) cout<<" PUNTOS DE LA TIRADA: "<<puntosAcum<<endl<<endl;
        if(flag2==true) cout<<" CANTIDAD DE BUNCOS OBTENIDOS: "<<cantBuncos<<endl<<endl;
        if(flag2==true) cout<<" =>> PUNTOS TOTALES DE LA PARTIDA: "<<puntosTotales<<endl<<endl;

        cout<<endl<<endl;
        cout<<"** INGRESAR OPCION PARA CONTINUAR: ";
        cin>>opc;
        system("cls");

        switch(opc){
            case 1: if(flag==false){cargarVectorAleatorio(v,t,5); flag=true;}
            else cout<<"* OPCION INCORRECTA, SELECCIONE UNA OPCION VALIDA: "<<endl<<endl;
            cantTiradas++;
            break;
            case 2: if(flag==true) mostrarVector(v,t);
            else cout<<"* OPCION INCORRECTA, SELECCIONE UNA OPCION VALIDA: "<<endl<<endl;
            break;
            case 3: if(flag==true){
            puntosAcum=analisisPuntos(v,t,ronda);
            puntosRonda=puntosRonda+puntosAcum;
            puntosTotales=puntosTotales+puntosAcum;
            flag=false;
            flag2=true;
            if(puntosAcum==21) cantBuncos++;
            if(puntosAcum==0) cantFallidas=cantFallidas+2;}

            else cout<<"* OPCION INCORRECTA, SELECCIONE UNA OPCION VALIDA: "<<endl<<endl;
            break;
            case 4: instrucciones();
            break;
            case 0:
            return 0;
            break;
            default: cout<<"* OPCION INCORRECTA, SELECCIONE UNA OPCION VALIDA: "<<endl;
            break;
        }
        system("pause");
    }
    system("cls");
    cout<<" ** CANTIDAD DE RONDAS TOTALES FINALIZADAS ** "<<endl<<endl<<endl;
    cout<<" ==> JUGADOR: ";
    mostrarNombre(vNombre1);

    cout<<endl<<endl;
    puntosTotales=puntosTotales-cantFallidas;
    vec1[0]=cantBuncos;
    cout<<" CANTIDAD DE TIRADAS FALLIDAS: "<<cantFallidas<<'\t'<<" CANTIDAD DE BUNCOS OBTENIDOS: "<<cantBuncos<<endl<<endl;
    cout<<" CANTIDAD DE TIRADAS NECESARIAS PARA COMPLETAR LAS 6 RONDAS >> "<<cantTiradas<<endl<<endl;
    cout<<" PUNTAJE TOTAL OBTENIDO: "<<puntosTotales<<'\t'<<"* PARTIDA FINALIZADA *"<<endl;
    cout<<endl<<endl<<endl;
    copiarVectorNombre(vNombre1, vec, tam);
    return puntosTotales;
}

int analisisPuntos(int v[], int t, int ronda){
    int puntos[5]={0}, pos;

    puntos[0]=calcularBunco(v,ronda,t);
    puntos[1]=calcularRepetidos(v,t);
    puntos[2]=calcularSumaDivisible5(v,t);
    puntos[3]=calcularEscalera(v,t);
    puntos[4]=contarNumerosRepetidos(v,ronda,t);

    pos=maximoVector(puntos,5);

    cout<<" RONDA: "<<ronda<<endl<<endl;
    cout<<" PUNTAJE DE LA TIRADA: "<<puntos[pos]<<endl<<endl;
    cout<<" SACASTE: ";

    if(puntos[pos]!=0){
        switch(pos){
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
    return puntos[pos];
}

int calcularBunco(int v[], int ronda, int t){
    int bunco;
    bunco=contarNumerosRepetidos(v,ronda,t);
    if(bunco==3) return 21;
    return 0;
}

int calcularRepetidos(int v[], int t){
    int cant;
    bool repetidos=false;
    for(int i=1; i<=6; i++){
        cant=contarNumerosRepetidos(v,i,t);
        if(cant==3) repetidos=true;
    }
    if(repetidos==true) return 5;
    return 0;
}

int calcularSumaDivisible5(int v[], int t){
    int suma;
    suma=sumarVector(v,t);
    if(suma%5==0) return 3;
    return 0;
}

int calcularEscalera(int v[], int t){
    bool ordenados=false;
    ordenarVector(v,t);
    if((v[0]==v[1]-1) && (v[1]==v[2]-1)) ordenados=true;
    if(ordenados==true) return 2;
    return 0;
}