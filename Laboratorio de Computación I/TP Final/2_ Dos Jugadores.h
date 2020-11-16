
#include "Funciones Generales.h"
#include "Instrucciones.h"

int DosJugadores(char vec[], int tam, int vec1[], int tam1);


int DosJugadores(char vec[], int tam, int vec1[], int tam1){
    int opc;
    int const t=3;
    int v[t];
    int ronda=1;
    char vNombre1[15];
    char vNombre2[15];
    bool flag1=false;
    bool flag2=false;
    bool flag3=false;
    bool indicador=false;
    int pAcum1=0;
    int pAcum2=0;
    int p1Ronda=0;
    int p2Ronda=0;
    int pTotales1=0;
    int pTotales2=0;
    int cantBuncos1=0;
    int cantBuncos2=0;
    int x=1;

    cout<<endl;
    cout<<" INGRESAR NOMBRE DEL JUGADOR 1:  ";
    cargarNombre(vNombre1);
    cout<<endl<<endl;
    cout<<" INGRESAR NOMBRE DEL JUGADOR 2:  ";
    cargarNombre(vNombre2);

    while(ronda<=6){
        system("cls");
        cout<<'\t'<<" ** PARTIDA PARA DOS JUGADORES **"<<endl<<endl<<endl;
        cout<<" ==> TURNO DEL JUGADOR NUMERO: "<<x<<"   ";
        if(x==1) mostrarNombre(vNombre1);
        else mostrarNombre(vNombre2);
        cout<<endl<<endl<<endl;

        cout<<'\t'<<" || RONDA ACTUAL: "<<ronda<<" ||"<<endl;
        cout<<endl<<endl<<endl;

        if(flag1==false) cout<<" 1. REALIZAR TIRADA."<<endl;
        if(flag1==true)  cout<<" 2. MOSTRAR DADOS."<<endl;
        if(flag1==true)  cout<<" 3. ANALICE SU TIRADA PARA PODER CONTINUAR."<<endl;
        cout<<" 4. INSTRUCCIONES."<<endl;
        cout<<" 0. VOLVER AL MENU PRINCIPAL.";

        cout<<endl<<endl<<endl<<endl;

        if(x==1&&flag2==true) cout<<" => PUNTOS ACUMULADOS DE LA RONDA DEL JUGADOR 1: "<<p1Ronda<<endl<<endl;
        if(x==1&&flag2==true) cout<<" => CANTIDAD DE BUNCOS OBTENIDOS: "<<cantBuncos1<<endl<<endl<<endl;
        if(x==2&&flag3==true) cout<<" => PUNTOS ACUMULADOS DE LA RONDA DEL JUGADOR 2: "<<p2Ronda<<endl<<endl;
        if(x==2&&flag3==true) cout<<" => CANTIDAD DE BUNCOS OBTENIDOS: "<<cantBuncos2<<endl<<endl<<endl;

        cout<<endl;
        cout<<"** INGRESAR OPCION PARA CONTINUAR: ";
        cin>>opc;
        system("cls");

        switch(opc){
            case 1:
            if(flag1==false){cargarAleatorio(v,t,5); flag1=true;}
            else cout<<"* OPCION INCORRECTA, SELECCIONE UNA OPCION VALIDA: "<<endl<<endl;
            break;

            case 2:
            if(flag1==true) mostrarVector(v,t);
            else cout<<"* OPCION INCORRECTA, SELECCIONE UNA OPCION VALIDA: "<<endl<<endl;
            break;

            case 3:
            if(flag1==true){
            if(flag2==true) flag3==true;
            flag1=false;
            flag2=true;

            if(x==1){
                pAcum1=analisisPuntos(v,t,ronda);
                pTotales1=pTotales1+pAcum1;
                p1Ronda=p1Ronda+pAcum1;
            }
            else{
                pAcum2=analisisPuntos(v,t,ronda);
                pTotales2=pTotales2+pAcum2;
                p2Ronda=p2Ronda+pAcum2;
                indicador=true;
            }

            if(x==1&&(p1Ronda>=21||pAcum1==0)) x=2;
            else if(x==2&&(p2Ronda>=21||pAcum2==0)) x=1;

            if(pAcum1==21&&indicador==true&&pAcum2==0){ronda++; indicador=false;}
            if(p1Ronda>21||p2Ronda>=21){ronda++; indicador=false;}
            if(pAcum1!=21&&p1Ronda>=21){ronda++; indicador=false;}


            if(pAcum1==21) cantBuncos1++;
            if(p1Ronda>=21) p1Ronda=0;
            if(pAcum2==21) cantBuncos2++;
            if(p2Ronda>=21) p2Ronda=0;

            }
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
    cout<<endl<<endl;
    cout<<'\t'<<"** PARTIDA FINALIZADA ** "<<endl;
    cout<<endl<<endl<<endl;
    if(pTotales1>pTotales2){
    cout<<'\t'<<">>=========>> JUGADOR GANADOR: >> ";
    mostrarNombre(vNombre1);
    copiarVectorNombre(vNombre1,vec,tam);
    vec1[0]=cantBuncos1;
    }
    else if(pTotales1<pTotales2){
    cout<<'\t'<<">>=========>> JUGADOR GANADOR: >> ";
    mostrarNombre(vNombre2);
    copiarVectorNombre(vNombre2,vec,tam);
    vec1[0]=cantBuncos2;
    }
    else{
    cout<<'\t'<<" ***  ***** [[      EMPATE !     ] ] *****  ***";;
    vec1[0]=cantBuncos2;
    }
    cout<<endl<<endl;
    cout<<'\t'<<"  | | || ESTADISTICAS DE LA PARTIDA || | |  "<<endl;
    cout<<endl<<endl;
    cout<<" ==> JUGADOR: 1 ";
    mostrarNombre(vNombre1);
    cout<<endl<<endl;
    cout<<" CANTIDAD DE BUNCOS OBTENIDOS: "<<cantBuncos1<<endl<<endl;
    cout<<" PUNTAJE TOTAL OBTENIDO: "<<pTotales1<<endl;
    cout<<endl<<endl;
    cout<<" ==> JUGADOR: 2 ";
    mostrarNombre(vNombre2);
    cout<<endl;
    cout<<" CANTIDAD DE BUNCOS OBTENIDOS: "<<cantBuncos2<<endl<<endl;
    cout<<" PUNTAJE TOTAL OBTENIDO: "<<pTotales2<<endl;
    cout<<endl<<endl;
    if(pTotales1>pTotales2) return pTotales1;
    else return pTotales2;

}
