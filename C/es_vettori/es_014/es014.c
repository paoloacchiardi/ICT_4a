/* Author: Acchiardi Paolo
Date: 07/03/2019
Es.014: Dato un vettore A di interi creare i vettori PARI e DISPARI formati rispettivamente dagli elementi pari e dispari presenti in A. */

#include<stdio.h>
#include<stdlib.h>
#include "../vettori.h"
#define DIM 4

int main(){
    int A[DIM];
    int PARI[DIM];
    int DISPARI[DIM];
    int k;
    int p; //contatore pari
    int d; //contatore dispari

    p=0;
    d=0;
    letturavettint(A, DIM);
    for(k=0;k<DIM;k++){
        if(A[k]%2==0){
            PARI[p]=A[k];
            p++;
        }
        else{
            DISPARI[d]=A[k];
            d++;
        }
    }
    printf("Elementi nel vettore PARI: ");
    visualizzazzionevettint(PARI, p);
    printf("Elementi nel vettore DISPARI: ");
    visualizzazzionevettint(DISPARI, d);
}
