/*
Author: Paolo Acchiardi
Date: 14/11/2018
Es. n.031: Inserito un numero rappresentante un anno dire se è bisestile o no.
*/

#include <stdio.h>
#include <stdlib.h>

main(){

    //dichiarazione delle variabili
    const int SECOLO = 100; //anni presenti in un secolo
    const int QUATTRO = 4; //quattro
    const int QUATTROCENTO = 400; //quattrocento
    int anno; //anno inserito

    printf("Inserire un numero rappresentante un anno: ");
    scanf("%i" , &anno);
    if (anno >= SECOLO){
        if (anno % SECOLO = 0){
            if (anno % QUATTROCENTO = 0){
                printf("L'anno e' bisestile");
            }
            else {
                printf("L'anno non e' bisestile");
            }
        }
        else{
            if (anno % QUATTRO = 0){
                printf("L'anno e' bisestile");
            }
            else {
                printf("L'anno non e' bisestile");
            }
        }
    }
    else {
        if (anno % QUATTRO = 0){
            printf("L'anno e' bisestile");
        }
        else{
            printf("L'anno non e' bisestile");
        }
    }



}
