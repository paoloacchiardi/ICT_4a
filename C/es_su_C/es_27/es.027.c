/*
Author: Paolo Acchiardi
Date: 14/11/2018
Es. n.027: Dati 3 numeri visualizzarli in ordine crescente
*/

#include <stdio.h>
#include <stdlib.h>

main(){

    //dichiarazione delle variabili
    float a; //primo numero
    float b; //secondo numero
    float c; //terzo numero

    printf("Inserire 3 numeri: ");
    scanf("%f %f %f" , &a , &b , &c);

    if (a > b) {
        if (a > c) {
            if (b > c) {
                printf("%f ; %f ; %f" , c , b , a);
            }
            else {
                printf("%f ; %f ; %f" , b , c , a);
            }
        }
        else {
            printf("%f ; %f ; %f" , b , a , c);
        }
    }
    else {
        if (b > a) {
            if (a > c) {
                printf("%f ; %f ; %f" , c , a , b);
            }
            else {
                if (c > a) {
                    if (b > c) {
                        printf("%f ; %f ; %f" , a , c , b);
                    }
                    else {
                        printf("%f ; %f ; %f" , a , b , c);
                    }
                }
                else {
                    printf("%f ; %f ; %f" , c , a , b);
                }
            }
        }
        else {
            if (c > a) {
                printf("%f ; %f ; %f" , a , b , c);
            }
            else {
                printf("%f ; %f ; %f" , c , a , b);
            }
        }
            }
}
