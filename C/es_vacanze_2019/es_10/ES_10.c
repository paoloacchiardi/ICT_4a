/* Author: Acchiardi Paolo
Date: 12/09/2019
Es.: Verificare se una matrice quadrata è unaria (tutti 0 tranne la diagonale principale di 1).
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define DIM 3

void carica_matrice(int *matrice[][DIM], int espansione);
bool controllo_matrice(int matrice[][DIM], int espansione);

main() {
    int matrice[DIM][DIM];
    bool control;
    carica_matrice(&matrice,DIM);
    control = controllo_matrice(matrice, DIM);
    if(control) {
        printf("\nLa matrice e' unaria.");
    } else {
        printf("\nLa matrice non e' unaria.");
    }
}

void carica_matrice(int *matrice[][DIM], int espansione) {
    int k;
    int j;
    for(k=0; k<espansione; k++) {
        for(j=0; j<espansione; j++) {
            printf("Inserisci un valore per la cella [%d][%d]: ",k,j);
            scanf("%d", &matrice[k][j]);
        }
    }
}

bool controllo_matrice(int matrice[][DIM], int espansione) {
    int k;
    int j;
    bool control;
    control = true;
    k=0;
    j=0;
    do {
        if(k!=j) {
            if(matrice[k][j]!=0) {
                control = false;
            }
        } else {
            if(matrice[k][j]!=1) {
                control = false;
            }
        }
        if(j<espansione-1) {
            j++;
        } else {
            if(k<espansione-1) {
                k++;
            }
        }
    } while(control && k<espansione-1);
        return control;
}
