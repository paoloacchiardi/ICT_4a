/* Author: Acchiardi Paolo
Date: 06/02/2019
Es.09: Usando le procedure calcolare area e perimetro di un quadrato dato il lato. */

#include<stdio.h>
#include<stdlib.h>

void quadrato(float lato,float *area,float *perimetro);
main(){

    //dichiarazione delle variabili
    float l,area,perimetro;
    area=0;
    perimetro=0;

    do{
        printf("Inserisci la misura del lato: ");
        scanf("%f", &l);
    }while(l<0 || l==0);

    quadrato(l,&area,&perimetro);
    printf("L'area vale %.2f e il perimetro vale %.2f.", area, perimetro);
    }

void quadrato(float lato,float *area,float *perimetro){
    *area = lato * lato;
    *perimetro = lato * 4;
    return;
}
