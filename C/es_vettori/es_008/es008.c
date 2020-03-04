/* Author: Acchiardi Paolo
Date: 04/03/2019
Es.008: Contare il numero di volte che un valore X compare in un vettore. */

#include<stdio.h>
#include<stdlib.h>
#include "../vettori.h"
#define DIM 4

int main(){
    //dichiarazione delle variabili
    float x;
    float A[DIM];
    int k; //contatore
    int valore; //numero di elementi con il valore x

    valore = 0;
    letturavettfloat(A,DIM);
    printf("Inserire un valore: ");
    scanf("%f", &x);
    for(k=0; k<DIM; k++){
            if(A[k] == x){
                valore++;
        }
    }
    printf("Il numero di volte in cui compare il valore inserito e' %d.", valore);
}
