/* Author: Acchiardi Paolo
Date: 04/03/2019
Es.010: Calcolare la somma degli elementi di posizione pari e quelli di posizione dispari di un vettore. */

#include<stdio.h>
#include<stdlib.h>
#include "../vettori.h"
#define DIM 4
int main(){
    //dichiarazione delle variabili
    float A[DIM];
    int k; //contatore
    float sommapari;
    float sommadispari;

    sommapari=0;
    sommadispari=0;
    letturavettfloat(A, DIM);
    for(k=0;k<DIM;k++){
        if(k % 2 == 0){
            sommapari=sommapari+A[k];
        }
        else{
            sommadispari=sommadispari+A[k];
        }
    }
    printf("La somma degli elementi di posizione pari e' %.2f e quelli di posizione dispari e' %.2f .", sommapari, sommadispari);
}
