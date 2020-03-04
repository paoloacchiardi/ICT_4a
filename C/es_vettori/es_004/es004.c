/* Author: Acchiardi Paolo
Date: 27/01/2019
Es.004: Dati  2  vettori:  v1,  v2,  caricare  nel  primo  valori  interi  e  nel  secondo  i
        valori  in ordine contrario.es. 1|2|3|5|8|6 --> 6|8|5|3|2|1.*/

#include<stdio.h>
#include<stdlib.h>

#define V 6
#include"..\vettori.h"

int main()
{
    int vett[V];
    int vett2[V];
    int n;
    int k;
    letturavettint(vett, V);

    for(n=0; n<V; n++)
    {
        vett2[n]=vett[k];
        k--;
        printf("%i" , vett2[n]);
}
}
