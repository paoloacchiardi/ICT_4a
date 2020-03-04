/* Author: Paolo Acchiardi
Date: 28/12/2018
Es. 077: Calcolare il prodotto di una successione di numeri reali, la successione termina quando si introduce lo 0 (se è il primo numero
in output deve comparire il messaggio "nessun numero"). */
#include <stdio.h>
#include <stdlib.h>
int main(){
    //dichiarazione delle variabili
    float prod; //prodotto dei numeri
    float num; //numero inserito dall'utente

    prod=1;
    printf("Inserisci un numero (0 per terminare): ");
    scanf("%f" , &num);
    if(num==0){
        printf("Nessun numero.");
    }
    else{
        do{
        prod=prod*num;
        printf("Inserisci un numero (0 per terminare): ");
        scanf("%f" , &num);
        } while(num!=0);
    printf("Il prodotto dei numeri e' %.3f", prod);
    }
}
