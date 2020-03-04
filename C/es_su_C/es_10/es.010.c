/*
author: Paolo Acchiardi
date: 19/10/2018
es. n.10: Dato lo stipendio lordo, calcolare la trattenuta previdenziale (1%)
          e la trattenuta fiscale(2%). Calcolare stipendio netto e dare
          il risultato.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

float stiplordo; //stipendio lordo
const int PREVIDENZIALEPERC = 1; //trattenuta previdenziale percentuale
const int FISCALEPERC = 2; //trattenuta fiscale percentuale
float trattprev; //trattenuta previdenziale
float trattfisc; //trattenuta fiscale
float stipnetto; //stipendio netto

//calcolo


printf("inserire lo stipendio lordo:");
scanf("%f" , &stiplordo);

trattprev = (PREVIDENZIALEPERC / 100) * stiplordo;
trattfisc = (FISCALEPERC / 100) * stiplordo;
stipnetto = stiplordo - (trattprev + trattfisc);

printf("lo stipendio netto e' %f" , stipnetto);

}
