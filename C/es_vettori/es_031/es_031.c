#include<stdio.h>
#include<stdlib.h>
#include "..\vettori.h"
#define CMAX 3
void caricaMat(int mat[][CMAX], int righe,int colonne);
void visualizzaMat(int mat[][CMAX], int righe, int colonne);

int main(){
    int c;
    int r;
    r=4;c=3;
    int m[r][c]; //[riga][colonna]
    caricaMat(m,r,c);
    visualizzaMat(m,r,c);
}

void caricaMat(int mat[][CMAX], int righe,int colonne){
    int x; int y;
    for(x=0;x<righe;x++){
        for(y=0;y<colonne;y++){
            printf("Inserisci il valore della cella [%d][%d]: ",x,y);
            scanf("%d", &mat[x][y]);
        }
    }

}
void visualizzaMat(int mat[][CMAX], int righe, int colonne){
    int x; int y;
    for(x=0;x<righe;x++){
        for(y=0;y<colonne;y++){
            printf("\nValore cella [%d][%d] = %d ",x,y, mat[x][y]);
        }
    }
}
