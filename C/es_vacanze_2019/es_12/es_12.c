/* Author: Acchiardi Paolo
Date: 16/09/2019
Es. 12: Dati in input il numero di righe NR e il numero di colonne NC, caricare per  colonne  la  matrice  MAT(NR,NC),
prelevando  i  numeri  dal  vettore  NUM di dimensione NRxNC. Quindi verificare che tutte le righe pari contengano numeri multipli di un numero X inserito da tastiera */

#include<stdlib.h>
#include<stdio.h>

void caricavettore(int vett[], int lunghezza);


main(){
    int nr,nc,lunghezza;
    printf("\nInserire il numero di righe e di colonne della matrice:");
    scanf("%d %d", &nr, &nc); //chiedo nr e nc
    int matrice[nr][nc]; //matrice
    lunghezza = nr*nc;
    int num[lunghezza]; //lunghezza vettore
    caricavettore(num, lunghezza);
    caricamatrice(num,lunghezza,matrice,nr,nc);
}

void caricavettore(int vett[], int lunghezza){
    int k;
    for(k=0;k<lunghezza;k++){
        printf("\nInserisci il valore della cella del vettore [%d]: ", k);
        scanf("%d", &vett[k]);
    }
}

void caricamatrice(int vettore[],int lun,int matrice[][],int righe,int colonne){
    int carica,r,c;
    carica=0;
        for(c=0;c<colonne;c++){
            for(r=0;r<righe;r++){
                matrice[c][r]=vettore[carica];
                carica++;
            }
        }
}
