/* Author: Paolo Acchiardi
Date: 28/12/2018
Es. 081: Dato un numero n calcolarne il fattoriale ricordando che 0!=1 1!=1 n!=n*(n-1)*(n-2)*...*2*1. */
#include <stdio.h>
#include <stdlib.h>
int main(){
    //dichiarazione delle variabili
    int num; //numero del quale si vuole ottenere il fattoriale
    int cont; //contatore
    int fatt; //fattoriale di num

    cont=1;fatt=1;
    printf("Inserire il numero del quale si vuole ottenere il fattoriale: ");
    scanf("%d", &num);
    while(cont<=num){ //verifico che il contatore sia minore o uguale al numero
        fatt=fatt*cont; //calcolo il fattoriale
        cont++; //incremento il valore del contatore di 1
    }
    printf("Il fattoriale del numero e' %d", fatt);
}
