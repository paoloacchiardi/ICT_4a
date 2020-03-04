/* Author: Acchiardi Paolo
Date: 20/04/2019
ES.: Data la successione di valori così definita:
A0 = 1; A1 = 2; A2 = 3; An = 2*An-1 - An-3 + 1 per i successivi, crea la procedura caricaSuccessione che, ricevuti come parametro un vettore V e il numero N>=3, carichi in
V i primi N termini della successione. (Per n = 7 si ha V={1,2,3,6,11,20,35}). */
#include<stdlib.h>
#include<stdio.h>
#include "..\vettori.h"
#define DIM 5
void caricaSuccessione(int V[],int N);
int main(){
    int vett[DIM];
    caricaSuccessione(vett, DIM);
    visualizzazzionevettint(vett, DIM);
    return(0);
}

void caricaSuccessione(int V[],int N){
    int k;
    k=0;
    if(N<3){
        printf("Errore! Il vettore deve contenere almeno 3 elementi.\n");
        exit(0);
    }
    for(k=0;k<N;k++){
        if(k<3){
            V[k]=k+1;
        }
        else{
            V[k]= 2*V[k-1]-V[k-3]+1;
        }
    }
}
