/* Author: Acchiardi Paolo
Date: 15-02-19
Es.003: Copiare  tutti  gli  elementi  di  posto  pari  del  vettore  V1 caricato  da  tastiera nel vettore V2 dello stesso tipo
        e dimensione opportuna. */

#include<stdio.h>
#include<stdlib.h>
#define DIN 4

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
    int i;
    i=0;
    for(k=0;k<DIN;k++){
        if(k % 2 == 0){
        vettB[i]=vettA[k];
        i++;
        }
    }

    //visualizza B
    int c; //contatore
    for(c=0;c<i;c++){
        printf("elemento [%d]= %.2f\n", c, vettB[c]);
    }
}
