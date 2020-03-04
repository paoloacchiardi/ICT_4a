/*
Author: Paolo Acchiardi
Date: 25/10/2018
Es. n.019: Ad un supermercato si applica lo sconto del 5% per importi superiori ai 100€. Dato l'importo iniziale calcolare il prezzo finale.
*/

#include <stdio.h>
#include <stdlib.h>

main(){

const int MIN = 100; //valore minimo per avere lo sconto (numero>100)
const float SCONTO = 0.05; //sconto non in percentuale
float imp1; //importo
float psconto; //euro scontati
float prezzo; //prezzo scontato del prodotto

//calcolo

printf("Inserisci un importo: ");
scanf("%f" , &imp1);
if (imp1 > MIN){
    psconto = imp1 * SCONTO;
    prezzo = imp1 - psconto;
} else {
    prezzo = imp1;
}
printf("Il prezzo e' pari a %.2f" , prezzo);
}
