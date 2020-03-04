/*
author: Paolo Acchiardi
date: 19-10-2018
es n.003: Dati base e altezza di un rettangolo determinare l'area e il perimetro
*/
#include <stdio.h>
#include <stdlib.h>

main(){

float base;           //la base del rettangolo
float altezza;        //l'altezza del rettangolo
float perimetro;      //il perimetro del rettangolo
float area;           //l'area del rettangolo

//calcolo

printf("Inserire la base del rettangolo:");
scanf("%f" , &base);
printf("Inserire l'altezza del rettangolo:");
scanf("%f" , &altezza);

perimetro = ( base * 2 ) + ( altezza * 2);
area = base * altezza;

printf("il perimetro del rettangolo é:" , perimetro);
printf("l'area del rettangolo é:" , area);

}

