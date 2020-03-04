/* Author: Acchiardi Paolo
Date: 18/09/2019
Es.19: Sia dato il file COORDINATE.TXT così costituito (da creare e riempire):
(0 , 7) (4,9) (1,5)       INVIO
(8 , 2) (1,4)             INVIO
I numeri tra parentesi, sempre tra lo 0 ed il 9, rappresentano il numero di riga ed il numero di colonna riferiti ad una matrice quadrata 9 x 9.
In ogni riga del file vi sia un numero imprecisato di coordinate (nell’esempio 3 nella prima riga e due nella seconda).
Dopo una parentesi   )   vi sia sempre uno spazio e ci sia una virgola tra spazi tra le due coordinate.
Leggere dal file i numeri che si trovano dentro ogni singola parentesi e scrivere nella corrispondente riga-colonna della matrice un  *  avendo cura di controllare
che i valori siano corretti e che tale scrittura non sia già avvenuta. Creare il file di output con la stampa della matrice e all’inizio l’eventuale elenco degli errori
con relative coordinate. */

#include<stdio.h>
#include<stdlib.h>
#define DIM 9

void caricamatrice(char matr[][DIM], int dimensione);
void stampamatrice(char matr[][DIM], int dimensione);

main(){
    char matr[DIM][DIM];
    caricamatrice(matr, DIM);
    stampamatrice(matr, DIM);
}

void caricamatrice(char matr[][DIM], int dimensione){
    int riga,colonna;
    FILE *fp;
    fp = fopen("coordinate.txt", "r");
    if(fp == NULL){
        printf("\nFile non trovato.");
    }
    else{
        do{
        fscanf(fp," %d  %d  ", riga, colonna); //salvo riga e colonna della matrice
        if(riga<= dimensione && colonna<= dimensione){
            matr[riga][colonna] = '*';
        }
        else{
            printf("\nLa cella [%d][%d] non e' presente.",riga,colonna);
        }
        }while(fscanf(fp," %d  %d  ",riga,colonna)!=EOF);
    }
    fclose(fp);
}

void stampamatrice(char matr[][DIM], int dimensione){
    FILE *fp;
    int r,c;
    fp = fopen("output.txt","w");
    for(r=0;r<dimensione;r++){
        for(c=0;c<dimensione;c++){
            fprintf(fp,"%c",matr[r][c]); //stampo contenuto della cella [r][c]
        }
    }
    fclose(fp);
}
