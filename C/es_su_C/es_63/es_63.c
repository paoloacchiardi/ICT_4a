/* Author: Paolo Acchiardi
Date: 22/12/2018
Es. 063: Fornire in output tutti i numeri interi compresi fra 20 e 30(estremi esclusi). */
#include <stdio.h>
#include <stdlib.h>
int main(){
    int num;
    num=21;
    for(num=21;num<30;num++){
        printf("%d\n", num);
    }
}
