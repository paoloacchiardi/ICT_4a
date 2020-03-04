#include<stdio.h>
#include<stdlib.h>
#define DIM 3
void leggiMatriceFloat(float matrice[][DIM], int righe);
void caricaMatricediduepuntotre(float matrice[][DIM], int righe);
main(){
    float mat[DIM][DIM];
    caricaMatricediduepuntotre(mat,DIM);
    leggiMatriceFloat(mat, DIM);
}

void leggiMatriceFloat(float matrice[][DIM], int righe){
    int c,r;
    for(r=0;r<righe;r++){
        for(c=0;c<DIM;c++){
            fprintf(stdout, "%.2f\n", matrice[r][c]);
        }
    }
}

void caricaMatricediduepuntotre(float matrice[][DIM], int righe){
    int c,r;
    for(r=0;r<righe;r++){
        for(c=0;c<DIM;c++){
            matrice[r][c]= 2.3;
        }
    }
}
