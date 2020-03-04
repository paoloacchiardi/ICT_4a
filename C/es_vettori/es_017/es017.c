/* Author: Acchiardi Paolo
Date: 13/03/2019
Es. 017: Creare un programma a menù con le seguenti funzioni a tasti: 0 = esci. 1 = carica il vettore con valori casuali da -20 a 20.
2 = visualizza il vettore. 3 = somma di tutti gli elementi. 4 = media degli elementi. 5 = gli elementi sono tutti positivi?
6 = somma degli elementi positivi,somma degli elementi negativi,quale somma è maggiore in valore assoluto? */

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include "../vettori.h"
#define DIM 5

void valoricasuali(float v[], int n, int min, int max);
void somma(float v[], int n, float *somma);

int main(){
    int num;
    int k;
    int pos;
    float sommapos;
    float sommaneg;
    float vett[DIM];
    float somm;
    float totale;
    float media;

    k,media,sommaneg,sommapos=0;
    somm,totale=0;
    pos=1;
   do{ printf("Scegli un'opzione:\n0 = esci.\n1 = carica il vettore con valori casuali da -20 a 20.\n"
"2 = visualizza il vettore.\n3 = somma di tutti gli elementi.\n4 = media degli elementi.\n5 = gli elementi sono tutti positivi?\n"
"6 = somma degli elementi positivi,somma degli elementi negativi,quale somma e' maggiore in valore assoluto?\n"
"7 = ordina un vettore.\n");
    scanf("%d", &num);

    switch(num){
    case 0:
        break;
    case 1:
        valoricasuali(vett,DIM, -20, 20);
        break;
    case 2:
        visualizzazzionevettfloat(vett, DIM);
        break;
    case 3:
        somma(vett, DIM, &somm);
        break;
    case 4:
        for(k=0;k<DIM;k++){
            totale=totale+vett[k];
        }
        media=totale/DIM;
        printf("La media degli elementi vale %.2f.", media);
        break;
    case 5:
        for(k=0;k<DIM;k++){
            if(vett[k]<0 || vett[k]==0){
                k=DIM;
                pos=0;
            }
        }
        if(pos==1){
            printf("Tutti gli elementi sono positivi.\n");
        }
        else{
            printf("Non tutti gli elementi sono positivi.\n");
        }
        break;
    case 6:
        for(k=0;k<DIM;k++){
            if(vett[k]>0 || vett[k]==0)
                sommapos=sommapos+vett[k];
            else
                sommaneg=sommaneg+vett[k];
        }
        sommaneg=-sommaneg;
        if(sommaneg>sommapos)
            printf("La somma dei numeri negativi e' maggiore della somma dei numeri positivi(in valore assoluto).\n");
        else
            printf("La somma dei numeri positivi e' maggiore della somma dei numeri negativi(in valore assoluto).\n");
        break;
    default:
        OrdinaVett(vett, DIM);
        visualizzazzionevettfloat(vett, DIM);
    }
   }while(num!=0);
}

void valoricasuali(float v[], int n, int min , int max){ //caricare vettore float
    int k; //posizione del vettore
  srand(time(NULL));
    for(k=0;k<n;k++){ //ciclo che si ripete per ogni posizione del vettore

        v[k]= rand() % (max-min+1) + min;
    }
    printf("fatto.\n");
}

void somma(float v[], int n, float *somma){
    int k;
    for(k=0;k<n;k++){
            *somma=*somma+v[k];
        }
    printf("La somma degli elementi del vettore e' %.2f.\n", *somma);
}
