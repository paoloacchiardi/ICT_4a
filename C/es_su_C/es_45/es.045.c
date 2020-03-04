/*
Author: Paolo Acchiardi
Date: 14/11/2018
Es. n.045: Dati in input 4 numeri A, B, C e D visualizzare quelli superiori alla media dei quattro numeri stessi.
*/

#include <stdio.h>
#include <stdlib.h>

main(){

    //dichiarazione delle variabili
    float a; //primo numero
    float b; //secondo numero
    float c; //terzo numero
    float d; //quarto numero
    float m; //media dei quattro numeri

    printf("Inserire 4 numeri: ");
    scanf("%f %f %f %f" , &a , &b , &c , &d);

    m = ( a + b + c + d) / 4; //calcol del valore della media dei quattro numeri

    if (a > m){
        printf("%f e' maggiore della media dei quattro numeri." , a);
    }
    if (b > m){
        printf("%f e' maggiore della media dei quattro numeri." , b);
    }
    if (c > m){
        printf("%f e' maggiore della media dei quattro numeri." , c);
    }
    if (d > m){
        printf("%f e' maggiore della media dei quattro numeri." , d);
    }
}
