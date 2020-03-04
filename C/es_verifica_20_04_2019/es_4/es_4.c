/* Author: Acchiardi Paolo
Date: 21/04/2019
ES: Crea la procedura CaricaOrdinato (int V[], int *M, int X) che aggiunge al vettore ordinato V di dimensione M l'elemento X, inserendolo in modo che il vettore rimanga
ordinato in ordine DECRESCENTE, come lo era già inizialmente. Alla fine il vettore avrà M+1 celle. */
#include<stdio.h>
#include<stdlib.h>
#include "..\vettori.h"
#define DIM 10
void CaricaOrdinato(int V[], int *M,int X);
int main(){
    int v[DIM]={15,12,12,10,9,8,7,7,6,5};
    int x;
    int num;
    x=DIM;
    printf("Che valore vuoi inserire nel vettore? (solo valori interi)\n");
    scanf("%d",&num);
    CaricaOrdinato(v,&x,num);
    visualizzazionevettint(v,x);
}

void CaricaOrdinato(int V[], int *M,int X){
    int k;
    int c;
    bool ret;
    int t[*M+2];
    k=0; ret= true;
    while(ret){
        if(X==V[k] || X>V[k]){
            c=k;
            t[c]=X;
            for(c=k;c<*M+1;c++){
                if(c!=0){
                if(c==*M){
                    *M=*M+1;
                    V[*M-1]=t[c];
                    c++;
                }
                else{
                t[c+1]=V[k];
                V[k]=t[c];
                k++;
                }
                }
            }
            ret= false;
        }
        k++;
    }
}
