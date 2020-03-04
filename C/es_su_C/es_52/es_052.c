/* Author: Acchiardi Paolo
Date: 16/01/2019
Es.n.052: "Dato un numero da 1 a 12 visualizzare il mese corrispondente." */

#include<stdio.h>
#include<stdlib.h>

int main(){

    //dichiarazione delle variabili
    int mese; //numero inserito dall'utente che corrisponde ad un mese

    printf("Inserisci un numero da 1 a 12: ");
    scanf("%d", &mese);
    switch(mese){
        case 1:
            printf("Gennaio.");
            break;
        case 2:
            printf("Febbraio.");
            break;
        case 3:
            printf("Marzo.");
            break;
        case 4:
            printf("Aprile.");
            break;
        case 5:
            printf("Maggio.");
            break;
        case 6:
            printf("Giugno.");
            break;
        case 7:
            printf("Luglio.");
            break;
        case 8:
            printf("Agosto.");
            break;
        case 9:
            printf("Settembre.");
            break;
        case 10:
            printf("Ottobre.");
            break;
        case 11:
            printf("Novembre.");
            break;
        case 12:
            printf("Dicembre.");
            break;
        default:
            printf("Non corrisponde ad un mese.");

    }
}
