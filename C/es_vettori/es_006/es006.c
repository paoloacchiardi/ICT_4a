/* Author: Acchiardi Paolo
Date: 04/03/2019
Es.006: Dopo  aver  caricato  un  vettore  di  numeri  interi  con  10  elementi,  calcolare  la  somma degli elementi. */

#include<stdio.h>
#include<stdlib.h>
#include "../vettori.h"
#define DIM 10

int main(){
    //dichiarazione delle variabili
    int A[DIM];
    int k; //contatore
    int somma; //somma elementi

    somma=0;
    letturavettint(A,DIM);
    for(k=0;k<DIM;k++){
        somma=somma+A[k];
    }

    printf("La somma degli elementi vale %d.", somma);
}
