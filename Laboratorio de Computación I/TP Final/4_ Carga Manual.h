
int CargaManual();


int CargaManual(){
    int opc;
    int const t=3;
    int v[t];
    int ronda=1;
    char vNombre1[10];
    bool flag=false;
    bool flag2=false;
    int puntosAcum=0;
    int puntosTotales=0;
    int cantBuncos=0;
    int cantFallidas=0;
    int puntosRonda=0;

    cout<<" INGRESE SU NOMBRE: "<<endl;
    cargarNombre(vNombre1);


    while(ronda<=6){
        system("cls");

        cout<<'\t'<<"** SISTEMA SIMULADO **"<<endl<<endl;
        cout<<"Dentro del sistema simulado de dados NO se guardara su puntuacion final obtenida al finalizar sus 6 rondas."<<endl<<endl<<endl;

        if(flag==false) cout<<" 1. REALIZAR TIRADA."<<endl;
        if(flag==true)  cout<<" 2. MOSTRAR DADOS."<<endl;
        if(flag==true)  cout<<" 3. ANALICE SU TIRADA PARA PODER CONTINUAR."<<endl;
        cout<<" 4. INSTRUCCIONES."<<endl;
        cout<<" 0. VOLVER AL MENU PRINCIPAL.";

        cout<<endl<<endl;
        if(flag2==true) cout<<" PUNTOS DE LA TIRADA: "<<puntosAcum<<endl<<endl;
        if(flag2==true) cout<<" PUNTOS TOTALES DE LA PARTIDA: "<<puntosTotales<<endl<<endl;
        if(puntosRonda>=21){ronda++; puntosRonda=0;}
        cout<<" RONDA ACTUAL: "<<ronda<<endl;

        cout<<endl;
        cout<<"* INGRESAR OPCION PARA CONTINUAR:"<<endl;
        cout<<endl<<endl;
        cin>>opc;
        system("cls");

        switch(opc){
            case 1: if(flag==false){cargarVector(v,t); flag=true;}
            else{cout<<"* OPCION INCORRECTA, SELECCIONE UNA OPCION VALIDA: "<<endl<<endl;}
            break;
            case 2: if(flag==true){mostrarVector(v,t);}
            else{cout<<"* OPCION INCORRECTA, SELECCIONE UNA OPCION VALIDA: "<<endl<<endl;}
            break;
            case 3: if(flag==true){
            puntosAcum=analisisPuntos(v,t,ronda);
            puntosRonda=puntosRonda+puntosAcum;
            puntosTotales=puntosTotales+puntosAcum;
            flag=false;
            flag2=true;
            if(puntosAcum==21) cantBuncos++;
            if(puntosAcum==0) cantFallidas++;}

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
    cout<<" CANTIDAD DE TIRADAS FALLIDAS: "<<cantFallidas<<'\t'<<" CANTIDAD DE BUNCOS OBTENIDOS: "<<cantBuncos<<endl<<endl;
    cout<<" PUNTAJE TOTAL OBTENIDO (SIMULADO): "<<puntosTotales<<'\t'<<"* PARTIDA FINALIZADA *"<<endl;
    cout<<endl<<endl<<endl;
}
