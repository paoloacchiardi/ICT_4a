/* Author: Acchiardi Paolo
Date: 04/03/2019
Es.009: Dati 3 vettori: v1, v2 e v3, caricare nei primi due i valori degli addendi e nel terzo la somma
        degli elementi corrispondenti dei due primi vettori, per es. v3[2]=v1[2]+v2[2].
        La grandezza massima d’ogni vettore è 20 elementi.. */

#include<stdio.h>
#include<stdlib.h>
#include "../vettori.h"
#define DIM 20

 void letturavettfloat2(float v[], int n);
 void letturavettfloat3(float v[], int n);
int main(){
    //dichiarazione delle variabili
    float v1[DIM]; //vettore1
    float v2[DIM]; //vettore2
    float v3[DIM]; //vettore3
    int k; //contatore

    letturavettfloat2(v1, DIM);
    letturavettfloat3(v2, DIM);

    for(k=0;k<DIM;k++){
        v3[k]= v1[k]+v2[k];
    }
    visualizzazzionevettfloat(v3, DIM);
}

void letturavettfloat2(float v[], int n){ //caricare vettore float
    int k; //posizione del vettore
    for(k=0;k<n;k++){ //ciclo che si ripete per ogni posizione del vettore
        printf("Inserisci il valore del primo addendo: ");
        scanf("%f", &v[k]);
    }
}

void letturavettfloat3(float v[], int n){ //caricare vettore float
    int k; //posizione del vettore
    for(k=0;k<n;k++){ //ciclo che si ripete per ogni posizione del vettore
        printf("Inserisci il valore del secondo addendo: ");
        scanf("%f", &v[k]);
    }
}
