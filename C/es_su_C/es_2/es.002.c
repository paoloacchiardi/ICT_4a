/*
author: Paolo Acchiardi
date: 19-10-2018
Es n.002:
*/
#include <stdio.h>
#include <stdlib.h>

main(){

float num1;      //il primo numero da inserire
float num2;      //il secondo numero da inserire
float num3;      //il terzo numero da inserire
float somma;     //la somma dei tre numeri

//calcolo

printf("inserire il primo numero:");
scanf("%f" , &num1);
printf("inserire il secondo numero:");
scanf("%f" , &num2);
printf("inserire il terzo numero:");
scanf("%f" , &num3);

somma = num1 + num2 + num3;

printf("la somma dei tre numeri é" , somma);

}
