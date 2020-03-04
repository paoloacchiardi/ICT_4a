/* Acchiardi Paolo TRIS */

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define DIM 3

void inizializza_matrice(int ciao[DIM][DIM], int righe, int colonne)

main(){
    int campo_gioco[DIM][DIM];
    char risp[DIM];
    float riga0;
    float colonna0;

    inizzializza_matrice(campo_gioco, DIM, DIM);
    printf("In che riga vuoi mettere lo 0, giocatore 1? ");
    scanf("%f", &riga0);
    printf("\n E in che colonna?");
    scanf("%f", &colonna0);
    if(campo_gioco[riga0-1][colonna0-1] != 9){
        printf("posizione non valida");
    }
    else{
        campo_gioco[riga0-1][colonna0-1] = 0;
    }

}

void inizializza_matrice(int ciao[DIM][DIM], int righe, int colonne){
    int r;
    int c;

    for(c=0;c<colonne;c++){
    for(r=0;r<righe;r++){
        ciao[r][c]== 9;
    }
    }
    return;
}
