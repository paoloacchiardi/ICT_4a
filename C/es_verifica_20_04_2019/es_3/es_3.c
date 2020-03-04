/* Author: Acchiardi Paolo
Date: 20/04/2019
ES: Due colleghi intendono fissare una riunione il mese di Giugno (30 giorni), pertanto devono identificare i giorni nei quali sono entrambi liberi da impegni. Realizza
il programma che permetta (nell'ordine):
- di immettere le disponibilità giorno per giorno, indicando il numero di appuntamenti della giornata (0 se sono liberi), prima al collega1 poi al collega2 (una sola procedura
chiamarìta due volte);
- di creare il vettore GiorniLiberi contenente le date dei vari giorni in cui sono liberi entrambi ATTENZIONE che gli indici partono da 0, mentre giorni del mese da 1;
- di visualizzare i 3 vettori con 3 chiamate alla stessa procedura;
- di visualizzare i giorni in cui ciascuno ha il massimo degli impegni come indicato più avanti.
Nel main ci devono essere solo chiamate alle funzioni e non devono esserci variabili globali.
Esempio : se ho i seguenti vettori
Impegni1 = {0,1,1,2,0,1,,0,2,..}
Impegni2 = {1,0,2,3,0,3,0,1}
Il terzo vettore conterrà le date in cui sono entrambi liberi ovvero
GiorniLiberi = {5,7,..}
e a video per l'ultimo punto comparirà
Il collega1 ha il massimo di impegni (2) nei seguenti giorni: 4 8.
Il collega2 ha il massimo di impegni (3) nei seguenti giorni: 4 6. */
#include<stdlib.h>
#include<stdio.h>
#include "..\vettori.h"
#define DIM 10
int caricaImpegni(int vett[], int giorni);
int vettGiorniLiberi(int giorniliberi[], int v1[], int v[2], int dimensione);
void valoriInseriti(int vett[], int dimensione);
void giornimax(int vett[], int dimensione, int max);
int main(){
    int Impegni1[DIM];
    int Impegni2[DIM];
    int GiorniLiberi[DIM];
    int date;
    int maxcollega1;
    int maxcollega2;
    printf("Collega 1:\n");
    maxcollega1 = caricaImpegni(Impegni1, DIM);
    printf("Collega 2:\n");
    maxcollega2 = caricaImpegni(Impegni2, DIM);
    date = vettGiorniLiberi(GiorniLiberi,Impegni1,Impegni2,DIM);
    printf("Collega1: ");
    valoriInseriti(Impegni1,DIM);
    printf("\nCollega2:");
    valoriInseriti(Impegni2,DIM);
    printf("\nGiorni liberi comuni:");
    valoriInseriti(GiorniLiberi,date);
    printf("\nIl collega 1 ha il massimo di impegni (%d) nei seguenti giorni: ", maxcollega1);
    giornimax(Impegni1,DIM,maxcollega1);
    printf("\nIl collega 2 ha il massimo di impegni (%d) nei seguenti giorni: ", maxcollega2);
    giornimax(Impegni2,DIM,maxcollega2);
}

int caricaImpegni(int vett[], int giorni){
    int k;
    int max;
    k=0; max=0;
    for(k=0;k<giorni;k++){
        printf("Inserire il numero di impegni nel giorno %d :\n", k+1);
        scanf("%d", &vett[k]);
        if(vett[k]>max){
            max=vett[k];
        }
    }
    return max;
}

int vettGiorniLiberi(int giorniliberi[], int v1[], int v2[], int dimensione){
    int k,c;
    k=0; c=0;
    for(k=0;k<dimensione;k++){
    if(v1[k]==0 && v2[k]==0){
        giorniliberi[c]=k+1;
        c++;
    }
    }
    return c;
}

void valoriInseriti(int vett[], int dimensione){
    int k;
    k=0;
    for(k=0;k<dimensione;k++){
        printf("%d-", vett[k]);
    }
}

void giornimax(int vett[], int dimensione, int max){
    int k;
    k=0;
    for(k=0;k<dimensione;k++){
        if(vett[k]==max){
            printf("%d ", k+1);
        }
    }
}
