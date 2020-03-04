/*
author: Paolo Acchiardi
date: 19-10-2018
es. n.7: Scambiare il valore di due variabili
*/
#include <stdio.h>
#include <stdlib.h>

main(){

float x; //valore della prima variabile
float y; //valore della seconda variabile
float z; //numero con valore uguale alla prima variabile

//calcolo

printf("inserisci il valore della prima variabile:");
scanf("%f" , &x);
printf("inserisci il valore della seconda variabile:");
scanf("%f" , &y);

z = x;
x = y;
y = z;

printf("la prima variabile vale %f e la seconda vale %f" , x , y);

}
