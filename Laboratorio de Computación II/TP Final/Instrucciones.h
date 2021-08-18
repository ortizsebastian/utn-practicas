#ifndef INSTRUCCIONES_H_INCLUDED
#define INSTRUCCIONES_H_INCLUDED

#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>

void Instrucciones(){

    setlocale(LC_ALL, "Spanish"); /// Permite usar distintos tipos de caracteres que no pertenecen al estandar que se puede imprimir normalmente.

    cout<<'\t'<<"** REGLAMENTO DEL JUEGO **"<<endl<<endl<<endl;

    cout<<"El juego consiste en seis rondas, las cuales progresan secuencialmente del uno al seis. Cada ronda comienza con un lanzamiento de tres dados y un posterior análisis del puntaje de la tirada."<<endl;
    cout<<endl<<endl;

    cout<<"- El jugador obtendrá:"<<endl<<endl;
    cout<<"21 puntos si los tres dados coinciden con el número de la ronda que se está jugando, a esta tirada se la denomina Bunco."<<endl;
    cout<<"5 puntos si los tres dados son iguales pero no coinciden con la ronda en curso."<<endl;
    cout<<"3 puntos si la suma de los tres dados es divisible por 5."<<endl;
    cout<<"2 puntos si los tres dados forman una escalera."<<endl;
    cout<<"1 punto por cada dado que coincida con el número de la ronda."<<endl<<endl;
    cout<<"Mientras el jugador obtenga algún puntaje en la tirada, podrá seguir realizando lanzamientos. Si realiza una tirada que no suma ningún puntaje, a la misma se la considerará tirada fallida."<<endl<<endl<<endl;

    cout<<'\t'<<"-- Finalización de cada ronda --"<<endl<<endl;

    cout<<" *** En el modo de un jugador: ";
    cout<<"Cada ronda termina cuando el jugador llega a un puntaje mayor o igual a 21. Al terminar las seis rondas, se le restará al puntaje final un total de dos puntos por cada tirada fallida que el jugador haya realizado."<<endl;
    cout<<endl<<endl;

    cout<<" *** En el modo de dos jugadores: ";
    cout<<"Cada ronda termina cuando uno de los jugadores obtiene un puntaje mayor o igual a 21 puntos. ";
    cout<<"Si en la primera tirada de una ronda el jugador 1 logra este puntaje sin ninguna tirada fallida, el segundo jugador puede realizar lanzamientos hasta cumplir con la condición de finalización de ronda o realizar una tirada fallida."<<endl;
    cout<<endl<<endl;
}


#endif // INSTRUCCIONES_H_INCLUDED