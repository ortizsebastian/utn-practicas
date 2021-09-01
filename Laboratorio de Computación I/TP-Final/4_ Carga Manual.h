
int CargaManual();


int CargaManual(){

    int X;
    int const T=3;
    int Dados[T];
    int Ronda=1;
    char Nombre[15];

    int PuntosTirada=0;
    int PuntosTotales=0;
    int Buncos=0;
    int CantFallidas=0;
    int PuntosRonda=0;
    int CantTiradas=0;

    bool Flag=false;
    bool Flag2=false;

    cout<<" INGRESE SU NOMBRE: ";
    cargarNombre(Nombre);


    while(Ronda<=6){
        system("cls");
        cout<<'\t'<<" ** PARTIDA EN MODO SOLITARIO **"<<endl;
        cout<<endl<<endl<<endl;
        if(PuntosRonda>=21){Ronda++; PuntosRonda=0;}
        cout<<'\t'<<" || RONDA ACTUAL: "<<Ronda<<" ||"<<endl;

        cout<<endl<<endl<<endl;

        if(Flag==false) cout<<" 1. REALIZAR TIRADA."<<endl;
        if(Flag==true)  cout<<" 2. MOSTRAR DADOS."<<endl;
        if(Flag==true)  cout<<" 3. ANALICE SU TIRADA PARA PODER CONTINUAR."<<endl;
        cout<<" 4. INSTRUCCIONES."<<endl;
        cout<<" 0. VOLVER AL MENU PRINCIPAL.";

        cout<<endl<<endl;
        if(Flag2==true) cout<<" PUNTOS DE LA TIRADA: "<<PuntosTirada<<endl<<endl;
        if(Flag2==true) cout<<" CANTIDAD DE BUNCOS OBTENIDOS: "<<Buncos<<endl<<endl;
        if(Flag2==true) cout<<" =>> PUNTOS TOTALES DE LA PARTIDA: "<<PuntosTotales<<endl<<endl;

        cout<<endl<<endl;
        cout<<"** INGRESAR OPCION PARA CONTINUAR: ";
        cin>>X;
        system("cls");

        switch(X){
            case 1: if(Flag==false){cargarAleatorio(Dados, T, 5); Flag=true;}
            else cout<<"* OPCION INCORRECTA, SELECCIONE UNA OPCION VALIDA: "<<endl<<endl;
            CantTiradas++;
            break;
            case 2: if(Flag==true) mostrarVector(Dados, T);
            else cout<<"* OPCION INCORRECTA, SELECCIONE UNA OPCION VALIDA: "<<endl<<endl;
            break;
            case 3: if(Flag==true){
            PuntosTirada=AnalisarPuntos(Dados, T, Ronda);
            PuntosRonda=PuntosRonda+PuntosTirada;
            PuntosTotales=PuntosTotales+PuntosTirada;
            Flag=false;
            Flag2=true;
            if(PuntosTirada==21) Buncos++;
            if(PuntosTirada==0) CantFallidas=CantFallidas+2;
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
    cout<<" ** CANTIDAD DE RONDAS TOTALES FINALIZADAS ** "<<endl<<endl<<endl;
    cout<<" ==> JUGADOR: ";
    mostrarNombre(Nombre);

    cout<<endl<<endl;
    PuntosTotales=PuntosTotales-CantFallidas;
    cout<<" CANTIDAD DE TIRADAS FALLIDAS: "<<CantFallidas<<'\t'<<" CANTIDAD DE BUNCOS OBTENIDOS: "<<Buncos<<endl<<endl;
    cout<<" PUNTAJE TOTAL OBTENIDO (SIMULADO): "<<PuntosTotales<<'\t'<<"* PARTIDA FINALIZADA *"<<endl;
    cout<<endl<<endl<<endl;
}
