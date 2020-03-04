/*
Author: Paolo Acchiardi
Date: 22/12/2018
Es. : caratteri ascii + colori
*/

#include <stdio.h>
#include <stdlib.h>
#include "../Funzioni.h"
#define NORMALE 15

int main(){

    int k;
    unsigned char c;

    c = 0;
    for(k=0;k<256;k++){
        printf("%d = %c ", k, c);
        textcolor(k);
        printf("*\n");
        textcolor(NORMALE);
        c++;
    }




}
