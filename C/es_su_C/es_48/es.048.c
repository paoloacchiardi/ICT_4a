/*
Author: Acchiardi Paolo
Date: 14/11/2018
Es. n.048: Scrivere un programma che, dato un cerchio di circonferenza C ed un quadrato di perimetro P, dica se è più lungo il diametro del
           cerchio o il lato del quadrato.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

   //dichiarazione delle variabili
    const float PI = 3.14; //p greco
    float p; //perimetro del quadrato
    float c; //circonferenza del cerchio
    float dim; //diametro del cerchio
    float l; //lato del quadrato

    printf("inserire il perimetro del quadrato e la circonferenza del cerchio: ");
    scanf("%f %f" , &p , &c);
    dim = c / PI; //calcolo del diametro del cerchio
    l = p / 4; //calcolo del lato del quadrato
    if(l > dim){
        printf("e' maggiore il lato.");
    }else{
        if(dim = l){
            printf("il lato e il diametro sono uguali.");
        }else{
            printf("e' maggiore il diametro.");
        }
    }


}
