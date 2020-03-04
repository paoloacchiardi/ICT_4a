/*
Author: Paolo Acchiardi
Date: 14/11/2018
Es. n.035: Dati tre coefficienti di un'equazione di secondo grado, con a nullo, determinarne le soluzioni X1 ed X2.
*/

#include <stdio.h>
#include <stdlib.h>

main(){

    //dichiarazione delle variabili
    float a; //primo coefficiente di un'equazione di secondo grado
    float b; //secondo coefficiente di un'equazione di secondo grado
    float c; //terzo coefficiente di un'equazione di secondo grado
    float delta; //delta di un'equazione di secondo grado

    printf("Inserisci i 3 coefficienti: ");
    scanf("%f %f %f" , &a , &b , &c);

    delta = (b * b) - (a * c); //calcolo del delta

    if(delta < 0){
        printf("L'equazione e' impossibile.");
    }
    else {
        if (delta = 0){
            printf("Le soluzioni sono reali e coincidenti.");
        }
        else {
            printf("Le soluzioni sono reali e distinte.");
        }
    }
}
