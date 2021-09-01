
void Puntuaciones(char VecNombre[], char VecNombre_1[], char VecNombre_2[], int CantBuncos,  int CantBuncos_1, int CantBuncos_2, int PuntosGanador, int Puntos){

    cout<<endl<<endl;
    cout<<"** [ MODO DE UN JUGADOR ] **"<<endl<<endl;

    if(Puntos!=0){
        cout<<"MAYOR PUNTAJE OBTENIDO EN ESTA SESION: "<<Puntos<<endl;
        cout<<"*** NOMBRE: "<<'\t';
        MostrarNombre(VecNombre);
        cout<<endl;
        cout<<"CANTIDAD DE BUNCOS OBTENIDOS: "<<CantBuncos<<endl<<endl<<endl;
    }
    else{
        cout<<" DEBE COMPLETAR UNA PARTIDA EN EL MODO UN JUGADOR PARA PODER VISUALIZAR EL MAYOR PUNTAJE OBTENIDO EN ESTA SECCION."<<endl<<endl<<endl;
    }

    cout<<"** [ MODO DE DOS JUGADORES ] **"<<endl<<endl;
    if(PuntosGanador!=0){
        cout<<"MAYOR PUNTAJE OBTENIDO EN ESTA SESION: "<<PuntosGanador<<endl;
        cout<<"*** NOMBRE: "<<'\t';
        if(CantBuncos_1!=0&&VecNombre_1!=0&&CantBuncos_2==0&&VecNombre_2==0){
            MostrarNombre(VecNombre_1);
            cout<<endl;
            cout<<"CANTIDAD DE BUNCOS OBTENIDOS: "<<CantBuncos_1<<endl<<endl<<endl;
        }
        else if(CantBuncos_2!=0&&VecNombre_2!=0&&CantBuncos_1==0&&VecNombre_1==0){
            MostrarNombre(VecNombre_2);
            cout<<endl;
            cout<<"CANTIDAD DE BUNCOS OBTENIDOS: "<<CantBuncos_2<<endl<<endl<<endl;
        }
        else{
            cout<<"***  EMPATE ENTRE EL JUGADOR 1 y 2  ***"<<endl<<endl;
            cout<<" JUGADOR 1:"<<'\t';
            MostrarNombre(VecNombre_1);
            cout<<endl;
            cout<<" JUGADOR 2:"<<'\t';
            MostrarNombre(VecNombre_2);
            cout<<endl<<endl;
            cout<<" -- AMBOS JUGADORES OBTUVIERON: "<<endl;
            cout<<"CANTIDAD DE BUNCOS: "<<CantBuncos_2<<endl<<endl;
            cout<<"PUNTUACION TOTAL: "<<PuntosGanador<<endl<<endl<<endl;
        }
    }
    else{
        cout<<" DEBE COMPLETAR UNA PARTIDA EN EL MODO MULTIJUGADOR PARA PODER VISUALIZAR EL MAYOR PUNTAJE OBTENIDO EN ESTA SECCION."<<endl<<endl<<endl;
    }
}
