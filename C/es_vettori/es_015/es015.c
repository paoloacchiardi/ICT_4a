/* Author: Acchiardi Paolo
Date: 21/03/2019
Es. 015: Dato un vettore A di interi inserire nel vettore B in testa gli elementi pari di A e in coda quelli dispari. */

#include<stdlib.h>
#include<stdio.h>
#include "../vettori.h"
#define DIM 10

int main(){
    int A[DIM];
    int B[DIM];
    int k;
    int t; //contatore minimo cella di B
    int m; //contatore massimo cella di B
    m=9;
    t=0;
    letturavettint(A, DIM);
    for(k=0;k<DIM;k++){
        if(A[k] % 2 == 0){
            B[t]=A[k];
            t++;
        }
        else{
            B[m]=A[k];
            m--;
        }
    }
    visualizzazzionevettint(B, DIM);
}
