/* Author: Acchiardi Paolo
Date: 15-02-19
Es.001: Copiare gli elementi di un vettore A caricato da tastiera in un vettore B dello stesso tipo e dimensione. */

#include<stdio.h>
#include<stdlib.h>
#define DIN 5

main(){
    float vettA[DIN];
    float vettB[DIN];
    int k;

    //lettura del vettore A
    for(k=0;k<DIN;k++){
        printf("Inserisci un valore: ");
        scanf("%f", &vettA[k]);
    }

    //copia del vettore A in B
    for(k=0;k<DIN;k++){
        vettB[k]=vettA[k];
    }

    //visualizza B
    for(k=0;k<DIN;k++){
        printf("elemento [%d]= %.2f\n", k, vettB[k]);
    }



    }
