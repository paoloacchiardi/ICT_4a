/*
Author: Paolo Acchiardi
Date: 14/11/2018
Es. n.029: Dato il peso della raccomandata scrivere l'importo da versare:
<= 50g si paga 2 euro ; <= 100g si paga 3.50 euro ; >100g si paga 4,50 euro ;
*/

#include <stdio.h>
#include <stdlib.h>

main(){

    //dichiarazione delle variabili
    const int LIN1 = 50; //limite per il quale se il peso e' minore o uguale il prezzo e' di 2 euro
    const int LIN2 = 100; //limite per il quale se il peso e' minore o uguale il prezzo e' di 3,50 euro
    const float COSTO1 = 2; //costo da versare se il peso della raccomandata è <=50g
    const float COSTO2 = 3.5; //costo da versare se il peso della raccomandata è >50g ma <=100g
    const float COSTO3 = 4.5; //costo da versare se il peso della raccomandata è >100g
    float peso; //peso della raccomandata
    float pago; //costo da versare

    printf("Inserire il peso: ");
    scanf("%f" , &peso);

    if (peso <= LIN1) {
        pago = COSTO1; //assegnamento del valore da versare
    }
    else {
        if (peso <= LIN2) {
                pago = COSTO2; //assegnamento del valore da versare
        }
        else {
            pago = COSTO3; //assegnamento del valore da versare
        }
    }
    printf ("Il prezzo e' %.2f" , pago);
}
