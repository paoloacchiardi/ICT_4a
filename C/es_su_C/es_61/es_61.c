/*
Author: Paolo Acchiardi
Date: 22/12/2018
Es. 061: Dato un numero N non negativo (fai il controllo), visualizzare N '*'.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    //variabili
    float num; //numero inserito
    int cont; //contatore
do{
    printf("Inserire un numero non negativo: ");
    scanf("%f", &num);
} while(num < 0); //controllo che il numero sia non negativo
for(cont=0;cont<num;cont++){
   printf("*");
}}



