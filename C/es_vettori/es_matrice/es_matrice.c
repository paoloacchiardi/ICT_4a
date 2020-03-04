#include<stdlib.h>
#include<stdio.h>
#include "../vettori.h"
#include "../matrici.h"
#define RIGA 2
#define COLONNA 3

void VisualizzaMatriceBidimensionale(int m[][COLONNA], int righe, int colonne);
void ValoriCasualiMatriceInt(int m[][COLONNA], int righe, int colonne);

int main(){
    int r;
    int c;
    int k;
    int t;
    int matrice[RIGA][COLONNA];

    r=RIGA;
    c=COLONNA;
    ValoriCasualiMatriceInt(matrice, RIGA, COLONNA);
    VisualizzaMatriceBidimensionale(matrice, r, c);
}
