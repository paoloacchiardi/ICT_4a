/* Author: Acchiardi Paolo
Date: 01/03/2019
Es.013: Dati 2 vettori A e B creare C, vettore formato dagli elementi uguali in posizioni uguali dei vettori A e B. */

#include<stdio.h>
#include<stdlib.h>
#include "..\vettori.h"
#define DIM 3

void creavettoreuguali(float A[], float B[], float C[], int n, int *dimC);
void letturavettfloat1(float v[], int n);
void letturavettfloat2(float v[], int n);

int main(){
    float A[DIM], B[DIM], C[DIM]; //vettore con gli elementi uguali
    int i,k; //contatori

    letturavettfloat1(A,DIM);
    letturavettfloat2(B,DIM);


    creavettoreuguali(A,B,C,DIM);
    visualizzazzionevettfloat(C, k);



}

void creavettoreuguali(float A[], float B[], float C[], int n){
    int k,i;

    k=0;
    for(i=0;i<n;i++){
        if(A[i]==B[i]){ //se gli elementi a parità di indici (I)
            C[k]=A[i]; //a C assegno il valore comune di A e B
            k++; //incrementa l'indice di C
        }
    }
}

void letturavettfloat1(float v[], int n){ //caricare vettore float
    int k; //posizione del vettore
    for(k=0;k<n;k++){ //ciclo che si ripete per ogni posizione del vettore
        printf("Inserisci il valore della posizione del primo vettore: ");
        scanf("%f", &v[k]); //assegna il valore alla posizione puntata dal vettore
    }
}

void letturavettfloat2(float v[], int n){ //caricare vettore float
    int k; //posizione del vettore
    for(k=0;k<n;k++){ //ciclo che si ripete per ogni posizione del vettore
        printf("Inserisci il valore della posizione del secondo vettore: ");
        scanf("%f", &v[k]); //assegna il valore alla posizione puntata dal vettore
    }
}
