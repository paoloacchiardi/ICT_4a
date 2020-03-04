/*
Author: Paolo Acchiardi
Date: 13/12/2018
Es. : TABELLA COLORI
*/

#include <stdio.h>
#include <stdlib.h>
#include "../Funzioni.h" // ../ fa salire di un livello come cd.. su dos

#define NORMALE 15

main(){
    int k;

    for (k=0; k<256; k++){ // k = [0..255]
        textcolor(NORMALE);
        printf("%d= " , k);  //%d stampa una variabile, in questo caso %d = k
        textcolor(k);
        printf("*\n"); // * è ciò che si scrive mentre \n serve per andare a capo

    }
    textcolor(NORMALE);




}

