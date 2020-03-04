 /* Author: Acchiardi Paolo
Date: 28-04-2019
Es. 050: Costruire la tavola pitagorica per i numeri da 0 a 9, in pratica la matrice che ha per componenti il valore che si ottiene moltiplicando l'indice della riga
per l'indice della colonna. */
#include<stdio.h>
#include<stdlib.h>
#include "..\vettori.h"
#define CMAX 10
void visualizzaMatrice(int matrice[][CMAX], int righe, int colonne);
int main(){
    int r,c,k,t;
    r=10; c=10;
    int m[r][c];
    for(t=0;t<r;t++){
    for(k=0;k<c;k++){
        m[t][k]= k*t;
    }
    }
    visualizzaMatrice(m,r,c);
}

void visualizzaMatrice(int matrice[][CMAX], int righe, int colonne){
    int t,k;
    for(t=0;t<righe;t++){
    for(k=0;k<colonne;k++){
        printf("Valore [%d][%d] = %d.\n", t, k, matrice[t][k]);
    }
    }
}
