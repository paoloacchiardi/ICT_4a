/*
Author: Paolo Acchiardi
Date: 14/11/2018
Es. n.033: Trovare il minimo tra 6 numeri.
*/

#include <stdio.h>
#include <stdlib.h>

main(){

    //dichiarazione delle variabili
    float min; //numero minore
    float n1; //primo numero
    float n2; //secondo numero
    float n3; //terzo numero
    float n4; //quarto numero
    float n5; //quinto numero
    float n6; //sesto numero

    printf("Inserire 6 numeri: ");
    scanf("%f %f %f %f %f %f" , &n1 , &n2 , &n3 , &n4 , &n5 , &n6);
    if (n1 < n2){
        min = n1; //assegnamento a min del valore di n1
    }
    else{
        min = n2; //assegnamento a min del valore di n2
    }
    if (min > n3){
        min = n3; //assegnamento a min del valore di n3
    }
    if (min > n4){
        min = n4; //assegnamento a min del valore di n4
    }
     if (min > n5){
        min = n5; //assegnamento a min del valore di n5
    }
     if (min > n6){
        min = n6; //assegnamento a min del valore di n6
    }
    printf("Il minimo vale %f" , min);
}
