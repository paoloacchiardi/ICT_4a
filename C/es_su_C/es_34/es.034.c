/*
Author: Acchiardi Paolo
Date: 14/11/2018
Es. n.034: Dato un capitale e la durata in anni calcolare l'interesse semplice secondo la tabella:
<2000 - 1% ; <5000 - 1.25% ; >= 5000 - 1.5% .
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    //dichiarazione delle variabili
        const float K1 = 2000;
        const float K10 = 1; //sconto 1%
        const float K2 = 5000;
        const float K20 = 1.25; //sconto 1.25%
        const float K30 = 1.5; //sconto 1.5%
        float inta; //interesse annuo
        float cap; //capitale
        int anni; //anni
        float intot; //interesse semplice

        printf("inserire capitale e anni: ");
        scanf("%f %i" , &cap, &anni);
        if(cap < K1){
            inta = cap * K20 / 100;
        }else{
            if(cap < K2){
                inta = cap * K20 / 100;
            }else{
                inta = cap * K30 / 100;
            }
        }
        intot = inta * anni;
        printf("l'interesse semplice e' di %f" , intot);

}
