/* Author: Acchiardi Paolo
Date: 13/03/2019
Es. 018: Verificare se gli elementi di un vettore sono ordinati in modo crescente (non usare il for). */

#include<stdlib.h>
#include<stdio.h>
#include "../vettori.h"
#define DIM 5

int main(){
    float A[DIM];
    int a=0;
    int k=0;
    letturavettfloat(A, DIM);

    while(a=0 && k<DIM-1){
        if(A[k]==<A[k+1]){
            k++;
        }
        else{
            a=1;
                }
            }

    }
    if(a==0){
         printf("Gli elementi del vettore sono ordinati in ordine crescente.");
    }
    else{
        printf("Gli elementi del vettore non sono ordinati in ordine crescente.");
    }
}
