/*
Author: Paolo Acchiardi
Date: 14/11/2018
Es. n.021: Si richiedono 3 valori (per ultimo il maggiore) e si verifica se si tratta di una terna pitagorica.
*/

#include <stdio.h>
#include <stdlib.h>

main(){

    //dichiarazione delle variabili
    float num1; //primo cateto
    float num2; //secondo cateto
    float num3; //ipotenusa

    printf("Inserisci 3 numeri, per ultimo il maggiore dei 3: ");
    scanf("%f %f %f" , &num1 , &num2 , &num3);

    if ((num1 ^ 2) + (num2 ^ 2) = (num3 ^ 2)) {
        printf("Si tratta di una terna pitagorica");
    } else {
         printf("Non si tratta di una terna pitagorica");
    }


}
