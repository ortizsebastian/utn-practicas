#include "Funciones Generales.h"
#include "Instrucciones.h"


int DosJugadores(char VecNombre_1[], char VecNombre_2[], int Tam, int CantBuncos_1, int CantBuncos_2){

    /// Declaro vector dados, vectores nombres, Op (Opciones del switch), ronda y turno inicial en 1.

    int Op;
    int const T=3;
    int Dados[T];
    int Ronda=1;
    int Turno=1;
    int Ant;
    char Nombre_1[Tam];
    char Nombre_2[Tam];

    /// Contadores y Acumuladores para las tiradas y puntos.

    int PuntosTirada_1=0;
    int PuntosTirada_2=0;
    int PuntosRonda_1=0;
    int PuntosRonda_2=0;
    int PuntosTotales_1=0;
    int PuntosTotales_2=0;
    int Buncos_1=0;
    int Buncos_2=0;

    /// Banderas para mostrar o no partes del menu.

    bool X=false;
    bool Y=false;
    bool Z=false;

    /// Bandera para saber si ya jugo o no el segundo jugador.

    bool Flag=false;

    cout<<endl;
    cout<<" INGRESAR NOMBRE DEL JUGADOR 1:  ";
    CargarNombre(Nombre_1);
    cout<<endl<<endl;
    cout<<" INGRESAR NOMBRE DEL JUGADOR 2:  ";
    CargarNombre(Nombre_2);

    do{
        /// Jugador inicial.

        system("cls");
        cout<<'\t'<<" ** PARTIDA MODO MULTIJUGADOR **"<<endl<<endl<<endl;
        cout<<'\t'<<" || RONDA ACTUAL: "<<Ronda<<" ||"<<endl;
        cout<<endl<<endl;
        cout<<" TURNO ACTUAL DE ";
        if(Turno==1) MostrarNombre(Nombre_1);
        else MostrarNombre(Nombre_2);
        cout<<endl<<endl;

        /// Menu de juego.

        Ant=Turno;
        if(X==false) cout<<" 1. REALIZAR TIRADA."<<endl;
        if(X==true)  cout<<" 2. MOSTRAR DADOS."<<endl;
        if(X==true)  cout<<" 3. ANALICE SU TIRADA PARA PODER CONTINUAR."<<endl;
        cout<<" 4. INSTRUCCIONES."<<endl;
        cout<<" 0. VOLVER AL MENU PRINCIPAL.";
        cout<<endl<<endl<<endl<<endl;

        cout<<"** INGRESAR OPCION PARA CONTINUAR: ";
        cin>>Op;
        system("cls");

        switch(Op){
            case 1:
            if(X==false){CargarAleatorio(Dados, T, 5); X=true;}
            else cout<<"* OPCION INCORRECTA, SELECCIONE UNA OPCION VALIDA: "<<endl<<endl;
            break;

            case 2:
            if(X==true) MostrarVector(Dados, T);
            else cout<<"* OPCION INCORRECTA, SELECCIONE UNA OPCION VALIDA: "<<endl<<endl;
            break;

            case 3:

            if(X==true){
                if(Y==true) Z==true;
                X=false;
                Y=true;

                /// Dependiendo el turno realiza el analisis de la tirada y acumula los puntajes por ronda y por totales.

                if(Turno==1){
                    PuntosTirada_1 = AnalizarTirada(Dados, T, Ronda);
                    PuntosTotales_1 = PuntosTotales_1 + PuntosTirada_1;
                    PuntosRonda_1 = PuntosRonda_1 + PuntosTirada_1;
                    if(PuntosTirada_1==21) Buncos_1++;

                }
                else{
                    PuntosTirada_2 = AnalizarTirada(Dados, T, Ronda);
                    PuntosTotales_2 = PuntosTotales_2 + PuntosTirada_2;
                    PuntosRonda_2 = PuntosRonda_2 + PuntosTirada_2;
                    if(PuntosTirada_2==21) Buncos_2++;
                    Flag=true;
                }

                /// Cambio de turno segun corresponda.

                if(Turno==1 && (PuntosRonda_1>=21 || PuntosTirada_1==0)) Turno=2;
                else if(Turno==2 && (PuntosRonda_2>=21 || PuntosTirada_2==0)) Turno=1;

                /// Cambio de ronda segun corresponda.

                if(PuntosRonda_1>21 || PuntosRonda_2>=21){ /// Caso del jugador 1 completando la ronda SIN BUNCO y del jugador 2 completando la ronda CON O SIN BUNCO.
                    Ronda++;
                    PuntosRonda_1=0;
                    PuntosRonda_2=0;
                }
                if(PuntosTirada_1==21 && PuntosTirada_2==0 && Flag==true){ /// Caso de BUNCO del jugador 1 en la primera tirada.
                    Ronda++;
                    Flag=false;
                    PuntosRonda_1=0;
                    PuntosRonda_2=0;
                }

                /// Muestra pantalla con estadisticas del juego entre turnos.

                if(Ant!=Turno){
                    system("pause");
                    system("cls");
                    AnalisisDosJugadores(Turno, Ronda, Nombre_1, PuntosTotales_1, Buncos_1, Nombre_2, PuntosTotales_2, Buncos_2);
                }
            }
            else cout<<"* OPCION INCORRECTA, SELECCIONE UNA OPCION VALIDA: "<<endl<<endl;
            break;

            case 4: Instrucciones(); /// Reglamento del juego.
            break;

            case 0:
            return 0;
            break;

            default: cout<<"* OPCION INCORRECTA, SELECCIONE UNA OPCION VALIDA: "<<endl;
            break;
        }
        system("pause");
    }
    while(Ronda<=6);
    system("cls");

    /// Fin de la partida y carga de los vectores y variables con los parametros necesarios para la seccion de Puntajes.

    cout<<endl<<endl;
    cout<<'\t'<<"** PARTIDA FINALIZADA ** "<<endl;
    cout<<endl<<endl<<endl;

    /// Ganador jugador 1.

    if(PuntosTotales_1>PuntosTotales_2){
        cout<<'\t'<<">>=========>> JUGADOR GANADOR: >> ";
        MostrarNombre(Nombre_1);


        CopiarVectorNombre(Nombre_1, VecNombre_1, Tam);
        CantBuncos_1=Buncos_1;
        MostrarNombre(Nombre_2);

        CopiarVectorNombre(Nombre_2, VecNombre_2, Tam);
        CantBuncos_2=Buncos_2;
    }
    else if(PuntosTotales_1==PuntosTotales_2 && Buncos_1>Buncos_2){
        cout<<'\t'<<">>=========>> JUGADOR GANADOR: >> ";
        MostrarNombre(Nombre_1);


        CopiarVectorNombre(Nombre_1, VecNombre_1, Tam);
        CantBuncos_1=Buncos_1;
        MostrarNombre(Nombre_2);

        CopiarVectorNombre(Nombre_2, VecNombre_2, Tam);
        CantBuncos_2=Buncos_2;
    }

    /// Ganador jugador 2.

    else if(PuntosTotales_1<PuntosTotales_2){
        cout<<'\t'<<">>=========>> JUGADOR GANADOR: >> ";
        MostrarNombre(Nombre_2);


        CopiarVectorNombre(Nombre_1, VecNombre_1, Tam);
        CantBuncos_1=Buncos_1;
        MostrarNombre(Nombre_2);

        CopiarVectorNombre(Nombre_2, VecNombre_2, Tam);
        CantBuncos_2=Buncos_2;
    }
    else if(PuntosTotales_1==PuntosTotales_2 && Buncos_1<Buncos_2){
        cout<<'\t'<<">>=========>> JUGADOR GANADOR: >> ";
        MostrarNombre(Nombre_2);


        CopiarVectorNombre(Nombre_1, VecNombre_1, Tam);
        CantBuncos_1=Buncos_1;
        MostrarNombre(Nombre_2);

        CopiarVectorNombre(Nombre_2, VecNombre_2, Tam);
        CantBuncos_2=Buncos_2;
    }

    /// Empate.

    else{
        cout<<'\t'<<">>=========>> EMPATE !! >> ";

        CopiarVectorNombre(Nombre_1, VecNombre_1, Tam);
        CantBuncos_1=Buncos_1;

        CopiarVectorNombre(Nombre_2, VecNombre_2, Tam);
        CantBuncos_2=Buncos_2;
    }

    /// Estadisticas de la partida.

    cout<<endl<<endl;
    cout<<'\t'<<"  | | || ESTADISTICAS DE LA PARTIDA || | |  "<<endl;
    cout<<endl<<endl;
    cout<<" ==> JUGADOR: 1 ";
    MostrarNombre(Nombre_1);
    cout<<endl<<endl;
    cout<<" CANTIDAD DE BUNCOS OBTENIDOS: "<<Buncos_1<<endl<<endl;
    cout<<" PUNTAJE TOTAL OBTENIDO: "<<PuntosTotales_1<<endl;
    cout<<endl<<endl;
    cout<<" ==> JUGADOR: 2 ";
    MostrarNombre(Nombre_2);
    cout<<endl;
    cout<<" CANTIDAD DE BUNCOS OBTENIDOS: "<<Buncos_2<<endl<<endl;
    cout<<" PUNTAJE TOTAL OBTENIDO: "<<PuntosTotales_2<<endl;
    cout<<endl<<endl;

    if(PuntosTotales_1>PuntosTotales_2) return PuntosTotales_1;
    else return PuntosTotales_2;
}
