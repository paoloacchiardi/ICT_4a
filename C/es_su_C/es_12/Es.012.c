/*
Author: Paolo Acchiardi
Date: 22/10/2018
Es. n.012: Date le coordinate di due punti trovare il punto medio.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

float x1;  //valore di x del primo punto
float y1;  //valore di y del primo punto
float x2;  //valore di x del secondo punto
float y2;  //valore di y del secondo punto
float mx;  //valore di x del punto medio
float my;  //valore di y del punto medio

//calcolo

printf("Inserire prima x e dopo y del primo punto: ");
scanf("%f %f" , &x1 , &y1);
printf("Inserire prima x e dopo y del secondo punto: ");
scanf("%f %f" , &x2 , &y2);

mx = (x1 + x2) / 2;
my = (y1 + y2) / 2;

printf("Il punto medio ha coordinate %.3f;%.3f" , mx , my);
}
