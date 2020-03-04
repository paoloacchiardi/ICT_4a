/* Author: Acchiardi Paolo
Date: 25/03/2019
Es.024: Caricare un vettore A con tutti elementi disgiunti (ad ogni inserimento controllare se il valore è già presente, se sì si fa reinserire). */

#include<stdio.h>
#include<stdlib.h>
#include "../vettori.h"
#define DIM 3

int main(){
    float A[DIM];
    int k;
    int t;
    bool tro;

    tro= false;
    k=0;
    printf("Inserisci il valore della posizione %d: ", k);
    scanf("%f", &A[k]);
    for(k=1;k<DIM;k++){
        do{printf("Inserisci il valore della posizione %d: ", k);
        scanf("%f", &A[k]);
        t=k-1;
        do{
         if(A[k]==A[t]){
            t=-5;
         }
         t--;
        }while(t>-1);
        if(t==-6){
        tro= true;
        }
        else{
            tro= false;
        }
        }while(tro);
    }
    visualizzazzionevettfloat(A, DIM);
}

