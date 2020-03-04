/*
Author: Paolo Acchiardi
Date: 24/10/2018
Es. n.016: Dato un importo intero in Euro calcolare il numero di banconote da 5 e di monete da 1 necessaerie.
*/
#include <stdio.h>
#include <stdlib.h>

main(){

const int unab = 5;   //valore di una banconota
int imp;          //importo intero in Euro
int nb;           //numero di banconote
int nm;           //numero di monete

//calcolo

printf("Inserire un importo intero in euro: ");
scanf("%i" , &imp);

nb = imp / unab;
nm = imp % unab;

printf("Il numero di banconote da 5 euro e' %i e il numero di monete da 1 euro e' %i" , nb , nm);

}
