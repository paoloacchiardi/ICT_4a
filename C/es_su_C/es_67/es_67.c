/* Author: Paolo Acchiardi
Date: 22/12/2018
Es. 067: Calcolare la somma di N numeri inseriti da tastiera.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    //variabili
    float somma; //somma dei numeri
    float num; //valore di un numero
    int cont; //contatore di numeri
    printf("Inserire il numero di numeri: ");
    scanf("%d", &cont);
    while(cont>0){
        printf("Inserisci il numero: ");
        scanf("%f", &num);
        somma=somma+num;
        cont--;
    }
    printf("La somma dei numeri inseriti e' %.3f", somma);
}
