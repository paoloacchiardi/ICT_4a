/* Author: Paolo Acchiardi
Date: 28/12/2018
Es. 083: Dati due numeri A e B positivi e B<>0, calcolarne il quoziente e il resto della divisione intera tra A e B ipotizzando di avere
a disposizione solo gli operatori + e -. */
#include <stdio.h>
#include <stdlib.h>
int main(){
    //dichiarazione delle variabili
    float dividendo; //dividendo
    float divisore; //divisore
    int div; //quoziente
    int resto; //resto

    do{
        printf("Inserisci il dividendo (maggiore o uguale a 0 e numero naturale): ");
        scanf("%f", &dividendo);
    }while(dividendo<0); //controllo che il dividendo soddisfi i requisiti chiesti
    do{
        printf("Inserisci il divisore (maggiore di 0 e numero naturale): ");
        scanf("%f", &divisore);
    }while(divisore<=0); //controllo che il divisore soddisfi i requisiti chiesti
    div=0;
    while(dividendo>=divisore){
        dividendo=dividendo-divisore; //sottraggo il valore del divisore al dividendo
        div++; //incremento di 1 il valore del quoziente
    }
    resto=dividendo;
    printf("Il risultato della divisione e' %d con resto %d.", div, resto);
}
