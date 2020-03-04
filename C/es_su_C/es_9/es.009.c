/*
author: Paolo Acchiardi
date: 19/10/2018
es. n.9: stabilita la percentuale di sconto, dato il prezzo di un prodotto,
         calcolare lo sconto, il prezzo scontato e comunicare i risultati.
*/
#include <stdio.h>
#include <stdlib.h>

main(){

float sconto;              //sconto del prodotto in percentuale
float prezzo;              //prezzo del prodotto non scontato
float sconto_totale;       //sconto totale sul prodotto
float prezzo_scontato;     //prezzo scontato del prodotto
//calcolo

printf("inserire la percentuale di sconto senza il simbolo della percentuale, dividendo gia' per 100 e dando il risultato separando la parte intera da quella decimale tramite un punto:");
scanf("%f" , &sconto);
printf("inserire il prezzo del prodotto:");
scanf("%f" , &prezzo);

sconto_totale = prezzo * sconto;
prezzo_scontato = prezzo - sconto_totale;

printf("lo sconto totale e' di %f e il prezzo scontato del prodotto e' di %f" , sconto_totale , prezzo_scontato);




}
