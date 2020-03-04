/*
author: Paolo Acchiardi
date: 19-10-2018
Es n.001: Calcolare il doppio di un numero dato in input
*/
#include <stdio.h>
#include <stdlib.h>

main(){

float num;        //numero dato in input
float doppio;     //doppio del numero

//calcolo

printf("Inserire un numero:");
scanf("%f" , &num);

doppio = num * 2;

printf("Il doppio del numero inserito é" , doppio);

}
