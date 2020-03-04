/* Author: Acchiardi Paolo
Date: 25/03/2019
Es.023: Caricare un vettore A con tutti i valori in ordine crescente (controllare ad ogni inserimento che il valore
        inserito sia >= del precedente se no si fa reinserire). */

#include<stdio.h>
#include<stdlib.h>
#include "../vettori.h"
#define DIM 10


int main(){
    float A[DIM];
    int k;

    k=0;
    printf("Inserisci il valore della posizione %d: ", k);
    scanf("%f", &A[k]);
    for(k=1;k<DIM;k++){
        do{
        printf("Inserisci il valore della posizione %d: ", k);
        scanf("%f", &A[k]);
        }while(A[k]<A[k-1]);
    }
    visualizzazzionevettfloat(A, DIM);

}
