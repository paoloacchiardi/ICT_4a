 /* Author: Acchiardi Paolo
Date: 28-04-2019
Es. 051: Dopo aver caricato in memoria una matrice di interi quadrata di ordine N(con N inserito da tastiera non superiore a 10), sommare gli elementi della diagonale
principale. */
#include<stdio.h>
#include<stdlib.h>
#include "..\vettori.h"
#define CMAX 3
void caricaMat(int mat[][CMAX], int righe,int colonne);
int sommaDiagonalePrincMatInt(int mat[][CMAX],int righe);
int main(){
    int n;
    int somma;
    do{
    printf("Inserisci il numero di righe/colonne della matrice quadrata (non >10): ");
    scanf("%d", &n);
    }while(n>10);
    int m[n][n];
    caricaMat(m,n,n);
    somma = sommaDiagonalePrincMatInt(m,n);
    printf("La somma degli elementi della diagonale principale e' %d.", somma);
}

void caricaMat(int mat[][CMAX], int righe,int colonne){
    int x; int y;
    for(y=0;y<righe;y++){
        for(x=0;x<colonne;x++){
            printf("Inserisci il valore della cella [%d][%d]: ",y,x);
            scanf("%d", &mat[y][x]);
        }
    }
}

int sommaDiagonalePrincMatInt(int mat[][CMAX],int righe){
    int k;
    int somma;
    somma=0;
    for(k=0;k<righe;k++){
        somma = somma + mat[k][k];
    }
    return somma;
}
