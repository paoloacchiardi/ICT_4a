/*
Author: Acchiardi Paolo
Date: 14/11/2018
Es. n.050: Dato  il  numero  di  lati  e  la  misura  del  lato di  un  poligono  regolare,  calcolare  il  perimetro  specificando  il tipo  di
           poligono (triangolo, quadrato,...fino a ottagono).
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    //dichiarazione delle variabili
    float num; //numero di lati
    float lato; //misura del lato
    float perim; //perimetro

    printf("inserire il numero di lati di un poligono regolare: ");
    scanf("%f" , &num);
    printf("inserire la misura del lato di un poligono regolare: ");
    scanf("%f" , &lato);

    perim = lato * num; //calcolo del perimetro
    printf("il perimetro e' %2.f" , perim);

    if(num == 8){
        printf(" e la figura e' un ottagono.");
    }
    if(num == 7){
        printf(" e la figura e' un ettagono.");
    }
    if(num == 6){
        printf(" e la figura e' un esagono.");
    }
    if(num == 5){
        printf(" e la figura e' un pentagono.");
    }
    if(num == 4){
        printf(" e la figura e' un quadrato.");
    }
    if(num == 3){
        printf(" e la figura e' un triangolo equilatero.");
    }




}
