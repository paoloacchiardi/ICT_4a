/*
Author: Acchiardi Paolo
Date: 16/12/2018
Es. n.055: Data una successione di numeri (la successione termina quando si introduce uno 0) per ciascun numero dire se è negativo o positivo.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float numero; //numero inserito

    printf("Inserire un numero (0 per terminare): ");
    scanf("%f" , &numero);
    while (numero != 0){     //verifico se il numero è diverso da 0
        if (numero > 0){     //verifico se il numero è positivo
            printf("Positivo.\n");
        } else{
         printf("Negativo.\n");
        }
        printf("Inserire un numero(0 per terminare): "); //inserisco nuovo numero
        scanf("%f" , &numero);
    }

}
