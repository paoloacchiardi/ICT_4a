/*
Author: Paolo Acchiardi
Date: 24/10/2018
Es. n.017: Dato il numero di giorni trascorsi a partire dal 1 gennaio, calcolare a quante settimane e giorni corrispondono.
*/
#include <stdio.h>
#include <stdlib.h>
#define GSETT 7
main(){

int ngt;             //numero di giorni trascorsi a partire dal primo gennaio
int ns;              //numero di settimane che corrispondono a ngt
int ng;              //numero di giorni che corrispondono a ngt

//calcolo

printf("Inserire il numero di giorni trascorsi a partire dal primo gennaio: ");
scanf("%d" , &ngt);

ns = ngt / GSETT;
ng = ngt % GSETT;

printf("%d giorni corrispondono a %d settimane e %d giorni.", ngt , ns , ng);
}
