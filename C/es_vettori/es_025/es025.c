/* Author: Acchiardi Paolo
Date: 25/03/2019
Es.025: Dato un vettore numerico di N celle, già carico con valori differenti, eliminare il numero X se esiste.. */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "../vettori.h"
#define DIM 3

int main()
{
    float A[DIM];
    int k;
    int t;
    bool tro;
    float valore_cercato;
    int pos_valore;

    tro= false;
    k=0;
    srand(time(NULL));
    A[k] = rand() % 1000 + -1000;
    for(k=1; k<DIM; k++) //ciclo che si ripete per ogni posizione del vettore
    {
        t=k-1;
        do
        {
            tro= false;
            A[k] = rand() % 1000 + -1000;
            do
            {
                if(A[k]==A[t])
                {
                    tro= true;
                }
                t--;
            }
            while(t>-1);
        }
        while(tro);
    }

    printf("Inserire il valore da cercare: ");
    scanf("%f", &valore_cercato);
    pos_valore = CercaNonOrdDisgFloat(A, DIM, valore_cercato);
    if(pos_valore==-1)
    {
        printf("Il valore cercato non e' presente nel vettore.");
    }
    else
    {

    }
}
