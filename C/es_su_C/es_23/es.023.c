/*
Author: Paolo Acchiardi
Date: 14/11/2018
Es. n.023: Dati in input A e B, interi positvi, verificare se uno è multiplo dell'altro.
*/

#include <stdio.h>
#include <stdlib.h>

main(){
    int a; //primo numero
    int b; //secondo numero

    printf("Inserire 2 numeri interi positivi: ");
    scanf("%i %i" , &a , &b);
    if (a > b){
            if (a % b = 0) {
                    printf("%i e' un multiplo di %i" , a , b);
            }
            else {
                printf("%i non e' un multiplo di %i" , a , b);
            }
        }
    else {
        if (a = b) {
            printf("%i non e' un multiplo di %i" , a , b);
        }
        else {
            if (b % a = 0) {
                printf("%i e' un multiplo di %i" , b , a);
            }
            else {
                printf("%i non e' un multiplo di %i" , b , a);
            }
        }
    }
}
