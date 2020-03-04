/* Author: Acchiardi Paolo
Date: 04/03/2019
Es.007: Dopo aver caricato un vettore di numeri interi con 10 elementi, contare gli elementi che hanno valore
        superiore ad un X inserito da tastiera. */

#include<stdio.h>
#include<stdlib.h>
#include "../vettori.h"
#define DIM 10

int main()
{
    //dichiarazione delle variabili
    int A[DIM];
    int k;
    int magg; //numero elementi con valore superiore a x
    float x; //numero

    magg=0;
    printf("Inserire un numero intero: ");
    scanf("%f", &x);
    letturavettint(A,DIM);
    for(k=0; k<DIM; k++){
            if(A[k] > x){
                magg++;
        }
    }
    printf("Gli elementi con valore maggiore al numero inserito sono %d.", magg);
}
