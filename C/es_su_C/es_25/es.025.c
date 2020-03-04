/*
Name: Paolo Acchiardi
Date: 9-11-2018
Es. n.025: Date le misure dei lati di un triangolo dire se è isoscele, equilatero o scaleno
*/
#include <stdio.h>
#include <stdlib.h>

main(){

float lato1; //primo lato
float lato2; //secondo lato
float lato3; //terzo lato

printf("Inserisci le misure dei 3 lati: ");
scanf("%f %f %f" , &lato1 , &lato2 , &lato3);
if (lato1 == lato2){
    if (lato2 == lato3) {
        printf("E' un triangolo equilatero."); }
   else {
    printf("E' un triangolo isoscele.");
   }
   }
   else {
    if (lato2 == lato3) {
        printf("E' un triangolo isoscele.");
    }
    else {
        if (lato3 == lato1) {
            printf("E' un triangolo isoscele.");
        }
        else {
            printf("E' un triangolo scaleno.");
        }
    }
   }

}


