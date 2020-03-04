/*
Author: Paolo Acchiardi
Date: 13/12/2018
Es. : TABELLA ASCII
*/

#include <stdio.h>
#include <stdlib.h>
#include "../Funzioni.h"

#define STELLA 244
#define GIALLO 14

main(){
    int k;
    unsigned char c;

    c = 0;
    for(k=0;k<256;k++){
        printf("%d = %c\n", k, c); //in codice ascii il %c fa vedere non il valore di c ma il suo segno corrispondente
        c++;
    }
    //lunghezza schermo = 80, h = 25



}
