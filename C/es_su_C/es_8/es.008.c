/*
author: Paolo Acchiardi
date: 19/10/2018
es. n.8: scambiare il valore di tre variabili
*/
#include <stdio.h>
#include <stdlib.h>

main(){

float x;  //prima variabile
float y;  //seconda variabile
float z;  //terza variabile
float xx; //numero pari al valore della prima variabile

//calcolo

printf("inserire il valore della prima variabile:");
scanf("%f" , &x);
printf("inserire il valore della seconda variabile:");
scanf("%f" , &y);
printf("inserire il valore della terza variabile:");
scanf("%f" , &z);


xx = x;
x = y;
y = z;
z = xx;

printf("la prima variabile vale %f , la seconda vale %f e la terza vale %f" , x , y , z);
}
