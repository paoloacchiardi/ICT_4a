/*
Author: Paolo Acchiardi
Date: 14/11/2018
Es. n.036: Dati tre numeri positivi, verificare se possono rappresentare la misura dei lati di un triangolo e in caso positivo, dire se può
           essere un triangolo rettangolo.
*/

#include <stdio.h>
#include <stdlib.h>

main(){
    float a; //primo numero positivo
    float b; //secondo numero positivol
    float c; //terzo numero positivo

    printf("Inserire 3 numeri positivi: ");
    scanf("%f %f %f" , &a , &b , &c);

    if (a > b){
        if (a > c){
            if (a < (b + c)){
                if (a = sqrt ((b * b) + (c * c))){
                    printf("E' un triangolo rettangolo.");
                }
                else {
                    printf("E' un triangolo, ma non rettangolo.");
                }
                }
                else {
                   printf("Non e' un triangolo.");
                }
                }
                else {
                    if (c > a){
                        if (c < (b + a)){
                            if (c = sqrt ((b * b) + (a * a))){
                                printf("E' un triangolo rettangolo.");
                            }
                            else {
                                printf("E' un triangolo, ma non rettangolo.");
                            }
                        }
                        else {
                            printf("Non e' un triangolo.");
                        }
                    }
                    else {
                        printf("Non e' un triangolo.");
                    }
                }
    }
    else {
        if (b > a){
            if (b > c){
                if (b < (c + a)){
                    if (b = sqrt ((c * c) + (a * a))){
                       printf("E' un triangolo rettangolo.");
                    }
                    else{
                       printf("E' un triangolo, ma non rettangolo.");
                    }
                }
                else {
                    printf("Non e' un triangolo.");
                }
            }
            else {
                if (c < a + b){
\                    if (c = sqrt ((a * a) + (b * b))){
                        printf("E' un triangolo rettangolo.");
                    }
                    else {
                        printf("E' un triangolo, ma non rettangolo.");
                    }
                }
                else{
                    printf("Non e' un triangolo.");
                }
            }
        }
        else{
            if (b > c){
                printf("Non e' un triangolo.");
            }
            else {
                if (c > b){
                    if (c < a + b){
                        if ( c = sqrt ((a * a) + (b * b))){
                            printf("E' un triangolo rettangolo.");
                        }
                        else {
                            printf("E' un triangolo, ma non rettangolo.");
                        }
                    }
                    else{
                        printf("Non e' un triangolo.");
                    }
                }
                else {
                    printf("Non e' un triangolo.");
                }
            }
        }
    }

}
