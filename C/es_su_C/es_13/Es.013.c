/*
Author: Paolo Acchiardi
Date: 22/10/2018
Es. n.013: Tutti gli articoli sono al 40% di sconto, dato il prezzo originale, calcolare il prezzo in saldo.
*/

#include <stdio.h>
#include <stdlib.h>

main(){

const float SCONTO = 0.4; //sconto su ogni prodotto
float prezzo_originale;   //prezzo non scontato del prodotto
float prezzo_saldo;       //prezzo scontato del prodotto

//calcolo

printf("Inserire il prezzo originale del prodotto: ");
scanf("%f" , &prezzo_originale);

prezzo_saldo = prezzo_originale - (SCONTO * prezzo_originale);

printf("Il prezzo scontato del prodotto e' di %.2f" , prezzo_saldo);
}
