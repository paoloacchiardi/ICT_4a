/* Author: Acchiardi Paolo
Date: 01/03/2019
Es.005: Invertire un vettore A senza usare un vettore di appoggio. */

#include<stdio.h>
#include<stdlib.h>
#include "../vettori.h"
#define DIM 4
int main(){
    float A[DIM]; //vettore
    int k; //contatore
    int v; //contatore2
    float t; //temporanea
    v=DIM-1;
    letturavettfloat(A, DIM);
    for(k=0;k<DIM/2;k++){
        t=A[v];
        A[v]=A[k];
        A[k]=t;
        v--;
    }
    visualizzazzionevettfloat(A, DIM);
}
