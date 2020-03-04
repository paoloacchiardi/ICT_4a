/*
Author: Paolo Acchiardi
Date: 22/10/2018
Es. n.014: Dati in input la quantità, il prezzo unitario dell'articolo venduto e l'IVA, comunicare in output il prezzo totale aumentato dell'IVA.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

int quantita; //quantità di prodotti
float prezzo_unitario; //prezzo unitario dell'articolo
float iva; //iva
float piva; //prezzo dell'iva
float prezzo_totale; //prezzo totale della spesa

//calcolo

printf("Inserire il numero di prodotti che si vogliono acquistare, il prezzo singolo del prodotto e l'IVA (non in percentuale e separando la parte "
       "decimale da quella intera tramite un punto): ");
scanf("%i %f %f" , &quantita , &prezzo_unitario , &iva);

piva = (quantita * prezzo_unitario * iva);
prezzo_totale = piva + (quantita * prezzo_unitario);

printf("Il prezzo finale e' di %.2f" , prezzo_totale);
}
