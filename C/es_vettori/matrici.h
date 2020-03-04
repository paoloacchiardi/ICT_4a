/* MATRICI */

#include<stdio.h>
#include<stdlib.h>

int colonne;
colonne=1;

void VisualizzaMatriceBidimensionale(int m[][colonne], int righe, int colonne){
    int k,t;
    for(k=0;k<righe;k++){
        for(t=0;t<colonne;t++){
            printf("[%d][%d]= %d\n", k, t, m[k][t]);
            }
    }
}

void ValoriCasualiMatriceInt(int m[][colonne], int righe, int colonne){
    int k;
    int t;
    srand(time(NULL));
    for(k=0;k<righe;k++){
        for(t=0;t<colonne;t++){
            m[k][t]=rand() % 999999 + 0;
        }
    }
}


