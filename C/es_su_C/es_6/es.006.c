/*
author: Paolo Acchiardi
date: 19-10-2018
es. n.6 : Dato il perimetro di un quadrato calcolarne l'area.
*/

#include <stdio.h>
#include <stdlib.h>

main(){

float perimetro;     //il perimetro del quadrato
float area;          //l'area del quadrato
float lato;          //lato del quadrato

printf("inserire il perimetro del quadrato: ");
scanf("%f" , &perimetro);

lato = perimetro / 4; //calcolo del lato del quadrato
area = lato * lato; //calcolo dell'area del quadrato

printf("L'area del quadrato e' %f " , area);

}
