/* Author: Paolo Acchiardi
Date: 28/12/2018
Es. 079: Dati due numeri naturali, A e B calcolarne il prodotto ipotizzando di avere a disposizione solamente l'operatore +. */
#include <stdio.h>
#include <stdlib.h>
int main(){
    //dichiarazione delle variabili
    int a; //primo numero naturale
    int b; //secondo numero naturale
    int p; //prodotto dei due numeri
    int c; //contatore

    printf("Inserire il primo numero naturale: ");
    scanf("%d", &a);
    printf("Inserire il secondo numero naturale: ");
    scanf("%d", &b);
    c=0;p=0;
    while(c<b){ //verifico che il contatore sia minore del secondo numero
        p=p+a; //sommo il primo numero al valore del prodotto
        c++; //incremento il contatore di 1
    }
    printf("Il prodotto e' pari a %d.", p);
}
