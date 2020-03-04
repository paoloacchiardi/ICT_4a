/* author: Acchiardi Paolo
data: 04/03/2019
es.012: Dato  un  vettore float visualizzare la somma di ogni elemento con i 2 successivi. L'ultimo elemento viene
        sommato con quelli iniziali. */

#include<stdio.h>
#include<stdlib.h>
#include "..\vettori.h"
#define DIM 4
int main(){
    //dichiarazione delle variabili
    int somma[DIM];
    float a[DIM];
    int c; //contatore

    inizializzazionevettint(a, DIM);
    inizializzazionevettfloat(somma, DIM);
    letturavettfloat(a, DIM);
    for(c=0; c<DIM-2; c++){
    somma[c]=a[c]+a[c+1]+a[c+2];
    }
    c++;
    somma[c]=a[c]+a[c+1]+a[c+1-DIM+1]; c++;
    somma[c]=a[c]+a[c-DIM+1]+a[c-DIM+3];
    visualizzazzionevettint(somma, DIM);
}
