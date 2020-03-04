/* author: Acchiardi Paolo
data: 04/03/2019
es.011:Dato un vettore di 100 numeri casuali con valori compresi tra 0 e 1000, calcolare la media di tutti i multipli di 3 in esso contenuti. */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "..\vettori.h"
#define DIM 100


int main(){
    int A[DIM];//vettore
    int c; //contatore1
    int somma;
    int k; //contatore2
    float media;

    somma=0;
    srand(time(NULL)); //genera numeri tra 1 e 1000
    for(k=0; k<DIM; k++){
        A[k] = rand()%1000+1;
        if(A[k]%3==0){ //controlla se il numero e' un multiplo di 3
            somma=somma+A[k];
            c++;
        }
    }
    media=somma/c;
    printf("La media dei numeri multipli di 3 del vettore vale %.2f.", media);
}
