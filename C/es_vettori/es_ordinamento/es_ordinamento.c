/* Author: Acchiardi Paolo
Date: 22/03/2019
Es.: Creo simulazione di ordinamento di un vettore. */

#include<stdlib.h>
#include<stdio.h>
#include"../Funzioni.h"
#include "../vettori.h"
#define DIM 10

int main(){
    int A[DIM];
    int k;

    ValoriCasualiInt(A, DIM, 1, 20);
    for(k=0;k<DIM;k+){
        gotoxy(k,A[k]);
        printf("X");
        getch();
    }
}


