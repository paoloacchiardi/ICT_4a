/* Author: Acchiardi Paolo
Date: 15-02-19
Es.002: Copiare il doppio del valore degli elementi di un vettore A caricato da tastiera in un vettore B dello stesso tipo e dimensione. */

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

    //copia del vettore A in B raddoppiando il valore
    for(k=0;k<DIN;k++){
        vettB[k]=vettA[k]*2;
    }

    //visualizza B
    for(k=0;k<DIN;k++){
        printf("elemento [%d]= %.2f\n", k, vettB[k]);
    }


    }
