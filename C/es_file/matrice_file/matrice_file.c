/* Scrivere un file di testo con al più 10 righe di 4 numeri, leggerlo caricando una matrice appropriata e quindi visualizzarla. */
#include<stdio.h>
#include<stdlib.h>
#define COLONNE 4
#define RIGHE 12
void caricaMatrice(int matrice[][COLONNE], int r, FILE *puntatore);
void visualizzaMatrice(int matrice[][COLONNE], int num_righe);

int main(){
    int matr[RIGHE][COLONNE];
    FILE *fp;
    fp = fopen("matrice.txt", "r");
    caricaMatrice(matr, RIGHE, fp);
    visualizzaMatrice(matr, RIGHE);
}

void caricaMatrice(int matrice[][COLONNE], int num_righe, FILE *puntatore){
    int r,c;
    r=0;c=0;
    while(fscanf(puntatore,"%d ",&matrice[r][c]!=EOF)){
        c=0;
        while(c<COLONNE){
            fscanf(puntatore,"%d ", &matrice[r][c]);
            printf("%d", matrice[r][c]);
            c++;
        }
    r++;
    }
}

void visualizzaMatrice(int matrice[][COLONNE], int num_righe){
    int r,c;
    for(r=0;r<num_righe;r++){
        for(c=0;c<COLONNE;c++){
            printf("cella [%d][%d] = %d\n", r,c,matrice[r][c]);
        }
    }
}
