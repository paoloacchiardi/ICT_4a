/*
Author: Paolo Acchiardi
Date: 22/12/2018
Es. 059: Dato un elenco di numeri, contare quanti ne sono stati inseriti. L'elenco termina rispondendo 'N'
         alla domanda "ancora?"
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    //variabili
    float num; //numero in input
    int c; //contatori numeri inseriti
    char risp; //risposta alla domanda "ancora?"

    do{
        printf("inserisci un numero: ");
        scanf("%f", &num);
        c++;
        printf("ancora? (N per terminare)");
        scanf("%c", &risp);
    }
    while( risp != 'N');

    printf("I numeri inseriti sono %d .", c);
}

